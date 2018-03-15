#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main() {
	string input;
	string food[5];
	bool hastacos = false;

	cout << "what is your favorite food" << endl << endl;
	for (int i = 0; i < 5; i++) {
		cin >> input;
		food[i] = input;
	}
	
	for (int i = 0; i < 5; i++)
		if (food[i] == "tacos" || food[i] == "tacos")
			hastacos = true;

	if (hastacos == true)
		cout << "tacos are great" << endl << endl;
	else
		cout << "you uncultured swine" << endl << endl;
	system("pause");
}