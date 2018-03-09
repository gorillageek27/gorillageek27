#include <iostream>
#include <ctime>
using namespace std;
void RandomColor();
int main() {
	srand(time(NULL));
	while (1) {
		RandomColor();
	}
}
void RandomColor() {
	int color = rand() % 8 + 1;
	switch (color) {
	case 1:
		system("color 1e");
	case 2:
		system("color 2b");
	case 3:
		system("color 3c");
	case 4:
		system("color 4d");
	case 5:
		system("color 5f");
	case 6:
		system("color 6a");
	case 7:
		system("color 7a");
	case 8:
		system("color 8b");
	}
}

