#include <iostream>
using namespace std;
int main() {
	int room = 1;
	
	char input = 'a';
	cout << "welcome to walk around simulator" << endl;
	while (input != 'q') {
		switch (room) {
		case 1:
			cout << " you are in room 1, you can go only (s)" << endl;
			cin >> input;
			if (input = 's')
				room = 2;
				break ;

		case 2:
			cout << " you are in room 2 you can go (n) or (e)" << endl;
			cin >> input;
			if (input = 'e')
				room = 3;
			else if (input = 'n')
				cout << "listen there are no achievments in this room" << endl;
			break;

		case 3:
			cout << "alright listen bud there are is only one place you can go at this point and thats (s) or (n)" << endl;
			cin >> input;
			if (input = 's')
				room = 4;
			else if (input = 'n')
				cout << " are you stupid or something?" << endl;
			break;

		case 4:
			cout << "you are in the last room there are no exists" << endl;
			break;

			

		}
	}



}