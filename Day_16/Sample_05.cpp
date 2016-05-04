#include <iostream>
using namespace std;

class Part{
public:
	Part(): itsPartNumber(1) {}
	Part(int partNumber): itsPartNumber(partNumber) {}
	virtual ~Part() {}

	int getPartNumber() const { return itsPartNumber; }
	virtual void display() const = 0;
private:
	int itsPartNumber;
};

void Part::display() const {
	cout << "\nPart Number: " << itsPartNumber << endl;
}



class CarPart : public Part{
public:
	CarPart(): itsModelYear(94) {}
	CarPart(int year, int partNumber):
		itsModelYear(year), Part(partNumber) {}

	virtual void display() const;
private:
	int itsModelYear;
};

void CarPart::display() const {
	Part::display();
	cout << "Model Year: " << itsModelYear << endl;
}



class AirPlanePart: public Part{
public:
	AirPlanePart(): itsEngineNumber(1) {};
	AirPlanePart(int engineNumber, int partNumber):
		itsEngineNumber(engineNumber), Part(partNumber) {}

	virtual void display() const;
private:
	int itsEngineNumber;
};

void AirPlanePart::display() const {
	Part::display();
	cout << "Engine №: " << itsEngineNumber << endl;
}

///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

class PartNode{
public:
	friend class PartsList;
	PartNode(Part* pPart): itsPart(pPart), itsNext(0) {}
	~PartNode();

	void setNext(PartNode * node) { itsNext = node; }
	PartNode * getNext() const { return itsNext; }
	Part * getPart() const;
private:
	Part * itsPart;
	PartNode * itsNext;
};

PartNode::~PartNode(){
	delete itsPart;
	itsPart = 0;
	delete itsNext;
	itsNext = 0;
}

Part * PartNode::getPart() const{
	if(itsPart)
		return itsPart;
	else
		return NULL;
}

///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

class PartsList{
public:
	PartsList(): pHead(0), itsCount(0){}
	~PartsList() { delete pHead; }

	Part* find(int & position, int partNumber) const;
	int getCount() const { return itsCount; }
	Part* getFirst() const;

	void insert(Part*);
	void iterate(void (Part::*func)() const) const;

	Part* operator[](int) const;

	static PartsList& getGlobalPartsList() { return GlobalPartsList; }
private:
	PartNode * pHead;
	int itsCount;
	static PartsList GlobalPartsList;
};

PartsList PartsList::GlobalPartsList;

Part* PartsList::getFirst() const{
	if(pHead)
		return pHead->getPart();
	else
		return NULL;
}

Part* PartsList::operator [](int offset) const{
	PartNode* pNode = pHead;
	if (!pHead)
		return NULL;
	if(offset > itsCount)
		return NULL;

	for(int i = 0; i < offset; i++)
		pNode = pNode->itsNext;

	return pNode->itsPart;
}

Part* PartsList::find(int & position, int partNumber) const{
	PartNode * pNode = 0;
	for(pNode = pHead, position = 0; pNode != NULL; pNode = pNode->itsNext, position++){
		if(pNode->itsPart->getPartNumber() == partNumber)
			break;
	}
	if(pNode == NULL)
		return NULL;
	else
		return pNode->itsPart;
}

void PartsList::iterate(void (Part::*func)() const) const{
	if (!pHead)
		return;
	PartNode* pNode = pHead;
	do
		(pNode->itsPart->*func)();
	while(pNode = pNode->itsNext);
}

void PartsList::insert(Part* pPart){
	PartNode * pNode = new PartNode(pPart);
	PartNode * pCurrent = pHead;
	PartNode * pNext = 0;

	int New = pPart->getPartNumber();
	int Next = 0;
	itsCount++;

	if(!pHead){
		pHead = pNode;
		return;
	}

	if (pHead->itsPart->getPartNumber() > New){
		pNode->itsNext = pHead;
		pHead = pNode;
		return;
	}

	for(;;){
		if(!pCurrent->itsNext){
			pCurrent->itsNext = pNode;
			return;
		}

		pNext = pCurrent->itsNext;
		Next = pNext->itsPart->getPartNumber();
		if(Next > New){
			pCurrent->itsNext = pNode;
			pNode->itsNext = pNext;
			return;
		}
		pCurrent = pNext;
	}
}

//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////

class PartsCatalog : private PartsList{
public:
	void Insert(Part*);
	int exist(int PartNumber);
	Part * Get(int PartNumber);
	//operator+(const PartsCatalog&);
	void ShowAll() { iterate(&Part::display); }
private:
};

void PartsCatalog::Insert(Part * newPart){
	int partNumber = newPart->getPartNumber();
	int offset;

	if(!find(offset, partNumber))
		PartsList::insert(newPart);
	else {
		cout << partNumber << " was the ";
		switch(offset){
			case 0: cout << " first "; break;
			case 1: cout << " second "; break;
			case 2: cout << " third "; break;
			default: cout << offset + 1 << "th ";
		}
		cout << "entry. Rejected!" << endl;
	}
}

int PartsCatalog::exist(int PartNumber){
	int offset;
	find(offset, PartNumber);
	return offset;
}

Part * PartsCatalog::Get(int PartNumber){
	int offset;
	return (find(offset, PartNumber));
}




int main(){
	PartsCatalog pc;
	Part * pPart = 0;
	int PartNumber;
	int value;
	int choice;

	while(1){
		cout << "(0)Quit (1)Car (2)Plane: ";
		cin >> choice;

		if(!choice)
			break;

		cout << "New PartNumber?: ";
		cin >> PartNumber;

		if(choice == 1){
			cout << "Model Year: ";
			cin >> value;
			pPart = new CarPart(value, PartNumber);
		} else {
			cout << "Engine number: ";
			cin >> value;
			pPart = new AirPlanePart(value, PartNumber);
		}
		pc.Insert(pPart);
	}
	pc.ShowAll();

	return 0;
}

