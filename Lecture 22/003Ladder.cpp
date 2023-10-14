/*

Suppose there is a ladder with n steps. A person standing at the bottom of the ladder and wants to
reach to its top. Assume the person can take atmost k steps at a time. Then, count the number
of ways, the person can reach the top of the ladder.

Example
	Input : n = 4, k = 3
	Output: 7
	Explanation : [1, 1, 1, 1],
	              [1, 1, 2],
	              [1, 2, 1],
	              [2, 1, 1],
	              [2, 2],
	              [1, 3],
	              [3, 1]

*/
#include<iostream>

using namespace std;

// vector<int> path;

// int countWays(int n, int k, int i) {

// 	// base case

// 	if (i == n) {

// 		for (int jumpsize : path) {
// 			cout << jumpsize << " ";
// 		}

// 		cout << endl;

// 		return 1;

// 	}

// 	// recursive case

// 	// count no. of ways to go from i to n

// 	int count = 0;

// 	for (int j = 1; j <= k; j++) {

// 		if (i + j <= n) {

// 			// next jump can be of size 'j'

// 			path.push_back(j);

// 			count += countWays(n, k, i + j);

// 			path.pop_back();

// 		}

// 	}

// 	return count;

// }

vector<int> path;

int countWays(int n, int k, int i) {

	// base case

	if (i == n) {

		for (int jumpsize : path) {
			cout << jumpsize << " ";
		}

		cout << endl;

		return 1;

	}

	if (i > n) {

		return 0;

	}

	// recursive case

	// count no. of ways to go from i to n

	int count = 0;

	for (int j = 1; j <= k; j++) {


		// next jump can be of size 'j'

		path.push_back(j);

		count += countWays(n, k, i + j);

		path.pop_back();



	}

	return count;

}

int main() {

	int n = 4;
	int k = 3;

	cout << countWays(n, k, 0) << endl;

	return 0;
}