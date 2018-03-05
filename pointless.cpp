#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int pointless(int a, int b);
int main() {
		int input;
		int a;
		int b;
		cout << "give a number" << endl;
		cin >> a;
		cout << "another one" << endl;
		cin >> b;
		cout << pointless(a, b);
}
int pointless(int a, int b) {
Beep(a, b * 200);
	return a*b;
	
}