#include <iostream>
using namespace std;
int Damage(int x, int y, int z, int a, double n, double t, int g, double m, double b);
int main() {
	cout << Damage(50, 70, 90, 100, 5.4, 5.5, 84, 5.3, 5.5);
}


int Damage(int x, int y, int z, int a, double n, double t, int g, double m, double b) {
	int num;

	num = ((((2 * x) / (5 + 2)*(y*m)*z) / (a*z) / (50 + 2) / (100)* t * n) *g);
	cout << "damage is" << num;
	return num;
		

}



