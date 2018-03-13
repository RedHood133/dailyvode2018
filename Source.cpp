#include<iostream>
#include<string>
using namespace std;
int main() {
	int inventory[7];
	bool hasfive = false;

	cout << "enter item" << endl << endl;
	for (int i = 0; i < 7; i++) {

		cin >> inventory[i];
	}

	cout << "your inventory item was" << endl;
	for (int i = 0; i < 7; i++)
		if (inventory[i] == 5)
			hasfive = true;
	if (hasfive = true)
		cout << "secret number!" << endl;
	else
		cout << "you suck" << endl;

}