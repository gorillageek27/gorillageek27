#include <iostream>
using namespace std;
int main() {
	
	int input;
	int a;
	int b;
	int c;
	int d;
	cout << "please enter a letter A - d" << endl;
	cin >> input;
	while (input != 'q') {
		switch (input) {
			if (input == 'a')
				cout << "alpha" << endl;
			else if (input == 'b')
				cout << "bravo" << endl;
			else if (input == 'c')
				cout << "charlie" << endl;
			else if (input == 'd')
				cout << "delta" << endl;

		}
	}
}