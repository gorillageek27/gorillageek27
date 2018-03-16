#include <iostream>
#include <ctime>
#include <string>
using namespace std;
void monster();



int main() {

	srand(time(NULL));
	char g='a';
	char w='a';
	char h='a';
	monster();

	string inventory[5];








	int room = 1;

	char input = 'a';
	cout << "Welcome to a StrangePlace." << endl << endl << endl;
	cout << "You are in a strange place that nothing seems to be what it is." << endl << endl;
	cout << "You have a strange feeling that you are not alone, and who or whatever is here isnt frienldy." << endl << endl;


	while (input != 'q') {
		switch (room) {
		case 1:
			cout << "there isnt anything of value in here, best to keep moving" << endl << endl;
			cout << " you are in room 1, you can go only (s)" << endl << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			break;

		case 2:
			cout << "You are in room 2 you can go (e) or (n). this room gives off a eerie feeling as if you're being watched." << endl << endl;
			cout << "We need to keep movin g this places gives me the creep." << endl << endl;
			cout << "all that you see is a book titled To Kill A Mockingbird, nothing usefull in here." << endl << endl;
			cin >> input;
			if (input == 'b')
				inventory[0] = "book";


			if (input == 'e')
			    room = 3;
			else if (input == 'n') {
				room = 1;
				cout << "Listen there are no achievments in this room" << endl << endl;
				cout << "this place dont sit right with me" << endl << endl;


			}
			break;

		case 3:
			
			cout << "alright listen bud there are is only one place you can go at this point and thats (s) or (w)" << endl << endl;
			cout << "There is a bloody kitchen knife on the counter to the lest of you" << endl << endl;
			monster();
			cin >> input;
			if (input == 'k')
				inventory[1] = "knife";
		


			if (input == 's')
				room = 4;
			else if (input == 'w') {
				room = 2;
				cout << "are you stupid or something?" << endl << endl;
				cout << "you can't be here now, let KEEP GOING" << endl << endl;
			}
			break;

		case 4:
			cout << "this room is seem to be a child's room, you can tell by the toy scatered on the floor (e) or (n) " << endl << endl;
			cout << " you suddenly hear something, a child's voice" << endl << endl;
			cout << "you can't stay in the same area for long" << endl << endl;
			monster();
			cin >> input;
			if (input == 'e')
				room = 5;
			else if (input == 'n') {
				room = 4;
				cout << "dude keep going" << endl << endl;

			}
			break;

		case 5:
			cout << "okay this looks like a sort of garden, but there are no window, however there is a single door in front(s) or (w)"<< endl << endl;
			cout << "there isnt much in this room, you can probably see if the door is locked" << endl << endl;
			monster();
           cin >> input;
			if (input == 's')
				room = 6;
			else if (input == 'w') {
				room = 5;
				cout << "your're pissing me off" << endl << endl;
			}
			break;

		case 6:
			cout << " you are in the sixth room you must keep moving (s) or (n)" << endl << endl;
			cout << "there seems to be a sort of device" << endl << endl;
			cin >> input;
			if (input == 'd')
				inventory[2] = "device";

			if (input == 's')
				room = 7;
			else if (input == 'n') {
				room = 5;
				cout << "YOU ARE GOING TO DIE HERE" << endl << endl;
			}
			break;

		case 7:
			cout << "welcome to the seventh room please go (w) or (n)" << endl << endl;
			cin >> input;
			if (input == 'w')
				room = 8;
			else if (input == 'n') {
				room = 6;
				cout << "why do you go back?" << endl << endl;
			}
			break;

		case 8:
			cout << "okay listen i'll make this simple go (s) or (not) (e)" << endl << endl;
			monster();
			cin >> input;
			if (input == 's')
				room = 9;
			else if (input == 'e') {
				room = 7;
				cout << "i hate you so much" << endl;
			}
			break;

		case 9:
			cout << "okay dude one more room and you'll be home free go (w) and if you pick (n)        i will hurt you.." << endl << endl;
			cin >> input;
			if (input == 'w')
				room = 10;
			else if (input == 'n') {
				room = 8;
				cout << " i hope you burn" << endl << endl;
			}
			break;

		case 10:
			cout << "welome to the tenth room and guess what???  the game isnt finished you spent a chunk of your life away" << endl << endl;
			monster();
			cin >> input;
			if (input == 'e')
				cout << "you cannot exit at this moment" << endl << endl;
			break;
		}
	}



}
void monster() {
	int num = rand() % 100 + 1;

	if (num < 20)
		cout << "the whisper" << endl;

	else if (num < 50)
		cout << "the glitcher" << endl;

	else if (num < 100)
		cout << "him" << endl;
}
