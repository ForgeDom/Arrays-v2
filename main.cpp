#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    srand(time(0));

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10;
    }
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bool foundDuplicates = false;

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                if (!foundDuplicates) {
                    foundDuplicates = true;
                }
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}
