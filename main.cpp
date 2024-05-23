#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int size1 = 10;
    const int size2 = 5;
    int arr1[size1];
    int arr2[size2] = { 0,0,0,0,0 };
    int arr3[size2] = { 0,0,0,0,0 };

    for (int i = 0; i < size1; ++i) {
        arr1[i] = rand() % 5 - 5;
    }
    for (int i = 0; i < size1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    int j = 0, k = 0;
    for (int i = 0; i < size1; i++) {
        if (i % 2 == 0) {
            arr2[j] = arr1[i];
            j++;
        }
        else
        {
            arr3[k] = arr1[i];
            k++;
        }
    }
    cout << "First array: " << endl;
    for (int i = 0; i < size2; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << "Second array: " << endl;
    for (int i = 0; i < size2; ++i) {
        cout << arr3[i] << " ";
    }
    return 0;
}