#include "StringConstrCount.hpp"

class Employee{
public:
	Employee();
	Employee(char*, char*, char*, long);
	~Employee() {}
	Employee(const Employee&);
	Employee & operator=(const Employee&);

	const String & GetFirstName() const { return itsFirstName; }
	const String & GetLastName() const { return itsLastName; }
	const String & GetAddress() const { return itsAddress; }
	long GetSalary() const { return itsSalary; }

	void SetFirstName(const String &firstName) { itsFirstName = firstName; }
	void SetLastName(const String &lastName) { itsLastName = lastName; }
	void SetAddress(const String &address) { itsAddress = address; }
	void SetSalary(long salary) { itsSalary = salary; }
private:
	String itsFirstName;
	String itsLastName;
	String itsAddress;
	long itsSalary;
};

Employee::Employee():
		itsFirstName(""),
		itsLastName(""),
		itsAddress(""),
		itsSalary(0){}

Employee::Employee(char* firstName, char* lastName, char* address, long salary):
		itsFirstName(firstName),
		itsLastName(lastName),
		itsAddress(address),
		itsSalary(salary){}

Employee::Employee(const Employee &rhs):
		itsFirstName(rhs.GetFirstName()),
		itsLastName(rhs.GetLastName()),
		itsAddress(rhs.GetAddress()),
		itsSalary(rhs.GetSalary()){}

Employee& Employee::operator=(const Employee &rhs){
	if(this == &rhs)
		return *this;

	itsFirstName = rhs.GetFirstName();
	itsLastName = rhs.GetLastName();
	itsAddress = rhs.GetAddress();
	itsSalary = rhs.GetSalary();

	return *this;
}

void PrintFunc(Employee);
void rPrintFunc(const Employee&);

int main(){
	Employee Edie("Jane", "Doe", "1461 Shore Parkway", 20000);
	Edie.SetSalary(50000);
	String lastName("Levine");
	Edie.SetLastName(lastName);
	Edie.SetFirstName("EddyThe");

	cout << "ConstructorCount: " << String::ConstructorCount << endl;
	rPrintFunc(Edie);
	cout << "ConstructorCount: " << String::ConstructorCount << endl;
	PrintFunc(Edie);
	cout << "ConstructorCount: " << String::ConstructorCount << endl;

	return 0;
}

void PrintFunc(Employee Edie){
	cout << "Name: " << Edie.GetFirstName().getString() << endl;
	cout << "Last Name: " << Edie.GetLastName().getString() << endl;
	cout << "Address: " << Edie.GetAddress().getString() << endl;
	cout << "Salary: " << Edie.GetSalary() << endl;
}

void rPrintFunc(const Employee& Edie){
	cout << "Name: " << Edie.GetFirstName().getString() << endl;
	cout << "Last Name: " << Edie.GetLastName().getString() << endl;
	cout << "Address: " << Edie.GetAddress().getString() << endl;
	cout << "Salary: " << Edie.GetSalary() << endl;
}

