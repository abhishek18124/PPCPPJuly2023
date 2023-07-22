#include<iostream>

using namespace std;

int main() {

	// int marks;
	// cin >> marks;

	// if (marks >= 91 and marks <= 100) {
	// 	cout << "very good" << endl;
	// } else if (marks >= 81 and marks <= 90) {
	// 	cout << "good" << endl;
	// } else if (marks >= 71 and marks <= 80) {
	// 	cout << "average" << endl;
	// } else if (marks >= 61 and marks <= 70) {
	// 	cout << "poor" << endl;
	// } else {
	// 	cout << "very poor" << endl;
	// }

	// cout << "you are outside the if-else-if block" << endl;

	char grade;
	cin >> grade;

	// if (grade == 'A') {
	// 	cout << "very good" << endl;
	// } else if (grade == 'B') {
	// 	cout << "good" << endl;
	// } else if (grade == 'C') {
	// 	cout << "average" << endl;
	// } else if (grade == 'D') {
	// 	cout << "poor" << endl;
	// } else {
	// 	cout << "very poor" << endl;
	// }

	// cout << "you are outside the if-else-if block" << endl;

	switch (grade) {

	case 'A' : cout << "very good" << endl; break;
	case 'B' : cout << "good" << endl; break;
	case 'C' : cout << "average" << endl; break;
	case 'D' : cout << "poor" << endl; break;
	default : cout << "very poor" << endl; break;

	}



	return 0;
}