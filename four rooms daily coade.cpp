#include<iostream>
#include<ctime>
#include<string>
using namespace std;
int main() {
	int room = 1;
	char input = 'a';
	cout << "this is a daily code" << endl;

	while (input!= 'q') {
		switch (room) {

		case 1:
			cout << "you are in room one you can only move (n)" << endl;
			cin >> input;
			if (input == 'n')
				room = 2;
			break;

		case 2:
			cout << "you are in the second room, this room is the bathroom,go ahead and do your business and move(e)or (s)" << endl << endl;
			cin >> input;
			if (input == 'e')
				room = 3;
			else if (input == 's') {
				room = 1;
				cout << "you can go back i dont really care" << endl;
			}
			break;

		case 3:
			cout << "you are in the kitchen go ahead and grab a snack after that move (n) or (w)" << endl;
			cin >> input;
			if (input == 'n')
				room= 4;
			else if (input == 'w') {
				room = 3;
				cout << "what are you sick?" << endl;
			}
			break;

		case 4:
			cout << "you are in the last the last room you can leav if you want(e)" << endl;
			cin >> input;
			if (input == 'e')
				cout << "good bye" << endl << endl;
				
			
		}
	}
}
