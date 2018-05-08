#include<iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int RjArray[10];
	for (int i = 0; i < 10; i++)
		RjArray[i] = rand() % 4 + 1;

	for (int i = 0; i < 10; i++)
		cout << RjArray[i] << " ";

}