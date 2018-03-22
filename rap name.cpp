#include <iostream>
#include <ctime>
#include <string>
using namespace std;

char input = 'y';

string adj[] = { "crazy", "lil", "cheesy", "m.c." "krusty", "stupid", "smelly", "d.j", "lonley", "battub", "tiny", "insane", "happy", "biggie" };
string noun[] = { "Chessey fungus", "donkey teeth", "spastic gerbil", "siezure", "domestice violence", "generic name", "dead body", "rat", "huamn sheiled", "Beverage" };

int main() {



	srand(time(NULL));
	cout << "Do you want to know your Rap name?" << endl;
	while (input == 'y') {
		cin >> input;

		int ad = rand() % 15;
		int nouns = rand() % 10;
		cout << adj[ad] << endl;
		cout << noun[nouns] << endl;

	}
}
