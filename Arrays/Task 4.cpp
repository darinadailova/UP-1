#include <iostream>

using namespace std;

int main()
{
    int arr[49];
    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;

    for (int i = 0; i < 49; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < 49; i++) {
        if (arr[i] > maxNumber) {
            maxNumber = arr[i];
        }
        if (arr[i] < minNumber) {
            minNumber = arr[i];
        }
    }

    cout << minNumber << endl;
    cout << maxNumber << endl;
}