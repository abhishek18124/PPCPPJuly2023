#include<iostream>

using namespace std;

int main() {

	int x = 10;

	x++;

	cout << x << endl;

	const int y = 20;

	cout << y << endl;

	// y++; // error

	// const int z; // error

	// z = 40; //

	return 0;
}