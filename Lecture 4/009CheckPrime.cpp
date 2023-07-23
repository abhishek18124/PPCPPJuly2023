#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive integer : ";
	cin >> n;

	int i = 2;

	// // time : O(n)

	// while (i <= n - 1) {

	// 	if (n % i == 0) {
	// 		// i is a factor of 'n' therefore n is not a prime
	// 		cout << "false" << endl;
	// 		break;
	// 	}

	// 	i = i + 1;

	// }

	// if (i == n) {
	// 	// since we could not find any factors of 'n' in the range [2, n-1]
	// 	cout << "true" << endl;
	// }


	int rn = sqrt(n);

	while (i <= rn) {

		if (n % i == 0) {
			// i is a factor of 'n' therefore n is not a prime
			cout << "false" << endl;
			break;
		}

		i = i + 1;

	}

	if (i > rn) {
		// since we could not find any factors of 'n' in the range [2, n-1]
		cout << "true" << endl;
	}


	return 0;
}