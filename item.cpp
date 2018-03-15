#include <iostream>
#include <string>
using namespace std;
int main() {
	int inventory[7]; //set up a 7-slot array
	bool hasFive = false;

	cout << "enter item." << endl << endl;
	for (int i = 0; i < 7; i++) {
		//inventory[i] = 7; //set each slot to 7
		cin >> inventory[i]; //set each slot to user input
	}


	cout << "YOU found" << endl;
	for (int i = 0; i < 7; i++)
		if (inventory[i] == 5)
			hasFive = true;

	if (hasFive == true)
		cout << "the secret number!" << endl;
	else
		cout << "you suck" << endl;
	


}
