#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	// for (int i = 0; i < n; i++) {
	// 	cout << i << " ";
	// }
	// cout << endl;

	// int i = 0;
	// for ( ; i < n; i++) {
	// 	cout << i << " ";
	// }
	// // cout << i << endl;
	// cout << endl;

	for (int i = 0, j = n - 1; i < j; i++, j--) {
		cout << i << " " << j << endl;
	}



	return 0;
}