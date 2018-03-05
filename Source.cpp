#include <iostream>
#include<Windows.h>
using namespace std;

//function declaration
int pointless(int m, int n);


int main() {
	Beep(400, 500);//other funciton call!
	//declare two variables
	int x;
	int y;
	cout << "give me two numbers" << endl;
	cin >> x;
	cin >> y;

	//function call
	cout<<pointless(x, y);
	system("pause");

}//end of main



//function definition
int pointless(int m, int n) {
	//print out a box
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << "*";
		cout << endl;
	}

	Beep(n*100, n*100);

	return m*n;
}