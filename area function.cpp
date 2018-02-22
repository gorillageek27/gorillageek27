#include <iostream>
using namespace std;
int Area(int x, int y){
	return x*y;
}
int main() {
	double x;
	double y;
	cout << "provide a value for a length" << endl;
	cin >> x;
	cout << "provide a value for a width" << endl;
	cin >> y;
	cout << "the area of a rectangle is" << x*y << endl;
	system("pause");


}
