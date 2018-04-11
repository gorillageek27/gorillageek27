#include <iostream>
using namespace std;
int main() {
	int b;
	double sum = 0;
	int t;
	int temp;
	int biggest = 0;
	cout << "input  numbers" << endl;
	cin >> b;
	for (int t = 1; t <= b; t++) {
		cout << "list  numbers" << endl;
		cin >> temp;
		sum += temp;
		if (temp > biggest)
			biggest = temp;

	}
	cout << "average is" << sum / b << endl;
	cout << "the larest" << biggest << endl;
}
