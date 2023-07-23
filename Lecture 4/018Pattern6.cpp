#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for (int i = 1; i <= n; i++) {

		// for the ith row, print n-i spaces

		for (int j = 1; j <= n - i; j++) {
			cout << "  ";
		}

		// followed by i nos. starting with i in the inc. order

		// for (int j = 1, num = i; j <= i; j++, num++) {
		// 	cout << num << " ";
		// }

		int num = i;
		int j = 1;

		while (j <= i) {
			cout << num << " ";
			num++;
			j++;
		}



		cout << endl;

	}

	return 0;
}