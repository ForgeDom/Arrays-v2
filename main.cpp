#include <iostream>
#include <ctime>
using namespace std;

int main() {
	const int size = 5;
	int arr1[size];
	int arr2[size];
	int arr3[size];
	srand(time(0));

	for (int i = 0; i < size; ++i) {
		arr1[i] = rand() % 10 - 5;
	}
	for (int i = 0; i < size; ++i) {
		cout << arr1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < size; ++i) {
		arr2[i] = rand() % 10 - 5;
	}
	for (int i = 0; i < size; ++i) {
		cout << arr2[i] << " ";
	}
	cout << endl;
	
	int j = 0;
	for (int i = 0; i < size; ++i) {
		arr3[j] = arr1[i] + arr2[i];
		j++;
	}
	for (int i = 0; i < size; ++i) {
		cout << arr3[i] << " ";
	}
	return 0;
}