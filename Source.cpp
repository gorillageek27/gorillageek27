#include <iostream>
#include <ctime>

using namespace std;

//function declaration
void minecraft();



int main() {
	srand(time(NULL));
	while (1) {
		minecraft(); //function call
		system("pause");
	}


}//end of main


 //function definition
void minecraft() {
	int num = rand() % 100 + 1;
	if (num < 30)
		cout << "skelton" << endl;
	else if (num < 80)
		cout << "creeper" << endl;
	else if (num < 100)
		cout << "zombie" << endl;
}