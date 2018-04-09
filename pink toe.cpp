#include <iostream>
#include <string>
#include <ctime>

using namespace std;

char input = 'y';

string adj[] = { "black", "yellow ", "green", "blue", "red", "Orange", "purple" };
string noun[] = { "leg","elbow", "fingers", "armpit","head","nose","foot","chest" };

int main() {
	srand(time(NULL));
	cout << "simon says?" << endl;
	while (input == 'y') {
		cin >> input;

		int ad = rand() % 15;
		int nouns = rand() % 10;
		cout << adj[ad] << endl;
		cout << noun[nouns] << endl;

	}
}
