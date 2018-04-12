#include<iostream>
#include<windows.h>
using namespace std;
int main() {
	int input = 0;

	while (input != 'a') {
	
	
			cout << "please select a song(1) (2) (3)" << endl;
			cin >> input;
	           switch (input) {
			
				case 1:	cout << "troaceda-good fight" << endl;
					PlaySound(TEXT(""), NULL, SND_FILENAME);
					break;
			
				case 2: cout << "jeff william - lusus nature" << endl;
					PlaySound(TEXT("Lusus Naturae by Jeff Williams with Lyrics (online-audio-converter.com).wav"), NULL, SND_FILENAME);
					break;
		
				case 3: cout << "jeff williams-red vs blue" << endl;
					PlaySound(TEXT("boop.wav"), NULL, SND_FILENAME);
					break;


		}
	}
}