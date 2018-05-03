#include<iostream>
#include<fstream>
using namespace std;

int main() {
	int a;
	int smallest;
	int biggest;
	ifstream myfile;
	myfile.open("numbers.txt");
	//set each equal to the first number in the file
	myfile >> smallest;
	myfile >> biggest;
	while (myfile >> a) {
		cout << a << " " << endl;
		if (a > biggest)
			biggest = a;
		//repeat for smallest
		if (a < smallest)
			smallest = a;
	}
	cout << "biggest is " << biggest << endl;
	cout << "smallest is" << smallest << endl;
	cout << endl;
	myfile.close();
	system("pause");

}