#include <iostream>

using namespace std;

int main() {

    const int size = 6;
    int arr[size] = { 10, 3, 7, 9, 5, 4 };

    int evenCount = 0;
    int oddCount = 0;


    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {

            evenCount++;
        }
        else {

            oddCount++;
        }
    }

    cout << "Number of even numbers in the array: " << evenCount << '\n';
    cout << "Number of odd numbers in the array: " << oddCount << '\n';

    return 0;
}