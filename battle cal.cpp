#include <iostream>

using namespace std;
int Knockback(int D, int p, int w, double s, int b, double r); 
int main() {


	cout << Knockback(0, 1, 0, 1.5, 1, 1.2) << endl;

}

int Knockback(int D, int p, int w, double s, int b, double r) {

	int num;
		num = ((((7 * (D + 2) * (D + p)/(w + 100) + 9) * 2 * s) + b) *r);
		cout << "battle damage is" << num;
		return num;
}

