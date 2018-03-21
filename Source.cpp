#include <iostream>
#include <string>
#include <ctime>

using namespace std;

char input = 'y';

string adj[] = { "The dark lord ", "clapper ", "Lil ", "Big ", "FLUFFY ", "Dj ", "spoopy ", "Icy ", "Young ", "Juicy ", "Retro ", "USSR ", "doki-doki ", "Orange ", "crit " };
string noun[] = { "water", "Blitz", "smoke", "pringles", "NANO", "Noctis", "Chin-chin", "can","Dog", "leverage","tasty" };

int main() {
	srand(time(NULL));
	cout << "Do you want to know your Rap name?" << endl;
	while (input == 'y') {
		cin >> input;

		int ad = rand() % 15;
		int nouns = rand() % 10;
		cout << adj[ad] << endl;
		cout << noun[nouns] << endl;

	}
}
