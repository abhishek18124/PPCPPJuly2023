#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;

	while (i <= n) {

		// 1. print n-i spaces

		for (int j = 1; j <= n - i; j++) {
			cout << "  ";
		}

		// 2. print i nos. in the inc. order starting with i

		int j = 1;
		int num = i;
		while (j <= i) {
			cout << num << " ";
			num++;
			j++;
		}

		// 3. print i-1 more nos. in the dec. order starting with 2i-2

		j = 1;
		// num = 2 * i - 2;
		num = num - 2;
		while (j <= i - 1) {
			cout << num << " ";
			num--;
			j++;
		}

		cout << endl;

		i++;

	}

	return 0;
}