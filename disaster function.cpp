#include<iostream>
#include <ctime>

using namespace std;
char disaster();
int main() {
	srand(time(NULL));
	while (1) {

		cout << "oh no! look out" << endl;
		disaster();
		system("pause");
	}
}
	char disaster() {
		int num = rand() % 100 + 1;
		if (num < 20) {
			cout << "raiders!" << endl << endl;
			return 'f';
			

		}
		else if (num < 50) {
			cout << "radroaches" << endl << endl;
			return 't';
			
		}


		else if (num < 100) {
			cout << "an unessecary dlc" << endl << endl;
			return 'a';
			
		}
		
	}
	




	


