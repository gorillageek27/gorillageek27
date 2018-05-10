#include <iostream>
using namespace std;
int main() {
	int sum;
	int i;
	cout << "input number" << endl;
	cin >> sum;
	for (i != sum) {
		sum = i;
		sum++;
	}
	cout << sum;
}
