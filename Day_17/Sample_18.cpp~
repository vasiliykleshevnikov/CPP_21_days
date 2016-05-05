#include <fstream>
#include <iostream>
using namespace std;

class Animal
{
	public:
		Animal(int weight, long int days):
			itsWeight(weight), daysAlive(weight) {}
		~Animal() {}

		int getWeight() const { return itsWeight; }
		void setWeight(int weight) { itsWeight = weight; }
		int getDaysAlive() const { return daysAlive; }
		void setDaysAlive(int days) { daysAlive = days; }
	private:
		int itsWeight;
		long int daysAlive;
};

int main()
{
	char fileName[80];

	cout << "Enter the file name: ";
	cin >> fileName;
	ofstream fout(fileName, ios::binary);
	if(!fout)
	{
		cout << "Unable to open " << fileName << " for writing.\n";
		return 1;
	}

	Animal Bear(50, 100);
	fout.write((char*) &Bear, sizeof Bear);
	fout.close();

	ifstream fin(fileName, ios::binary);
	if(!fin)
	{
		cout << "Unable to open " << fileName << " for reading.\n";
		return 1;
	}

	Animal BearTwo(1, 1);
	cout << "BearTwo weight: " << BearTwo.getWeight() << endl;
	cout << "BearTwo days: " << BearTwo.getDaysAlive() << endl;

	fin.read((char*) &BearTwo, sizeof BearTwo);
	cout << "BearTwo weight: " << BearTwo.getWeight() << endl;
	cout << "BearTwo days: " << BearTwo.getDaysAlive() << endl;
	fin.close();

	return 0;
}
