#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;

	while (i <= n) {

		// in the ith row, print 'i' nos.

		int j = 1;

		// int num = i % 2 == 0 ? 0 : 1;

		int num;
		if (i % 2 == 0) {
			num = 0;
		} else {
			num = 1;
		}

		while (j <= i) {
			cout << num << " ";

			// num = (num + 1) % 2;


			// num = !num;

			// num = 1 - num;

			if (num == 0) {
				num = 1;
			} else {
				num = 0;
			}

			j++;

		}

		cout << endl;
		i++;

	}

	return 0;
}