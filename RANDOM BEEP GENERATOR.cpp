#include <iostream>
using namespace std;
#include <windows.h>
#include <ctime>
int main() {
	srand(time(NULL));
	cout << "THIS IS WHAT HELL SOUNDS LIKE";

	int a;
	int b;
	
	while (1) {
		a = rand() % 6666 + 666;
		b = rand() % 6666 + 666;
		Beep(a, b);

	}



	}



 