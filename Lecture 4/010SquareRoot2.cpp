#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	int p;
	cin >> p;

	float square_root = 0;

	while (square_root * square_root <= n) {
		square_root = square_root + 1;
	}

	square_root = square_root - 1;

	int i = 1;
	float inc = 0.1;
	while (i <= p) {

		while (square_root * square_root <= n) {
			square_root = square_root + inc;
		}

		square_root = square_root - inc;

		i = i + 1;
		inc = inc / 10;

	}

	cout << square_root << endl;

	return 0;
}