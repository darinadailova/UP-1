#include<iostream>

using namespace std;

int main() {

	int arrA[48];
	int arrB[48];
	int sum = 0;

	for (int i = 0; i < 48; ++i) {
		cin >> arrA[i];
	}
	for (int i = 0; i < 48; ++i) {
		cin >> arrB[i];
	}
	for (int i = 0; i < 47; i++) {
		sum += arrA[i] * arrB[i];
	}
	cout << sum << endl;


	return 0;
}