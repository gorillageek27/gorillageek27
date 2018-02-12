#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	double bill;
	bool doexit = false;
	
	while(!doexit) 
	{cout << "please enter a bill for food you order at a resturaunt" << endl;
	cin >>bill;
		if (bill == 0)
			doexit = true;
		bill = bill * .15;
		cout << bill;



	}
}