#include <iostream>

using namespace std;

void getelements(int arr[], int n) {
    int small = INT_MAX, secsmall = INT_MAX;
    int large = INT_MIN, seclarge = INT_MIN;

    for (int i = 0; i < n; i++) {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < secsmall && arr[i] != small) {
            secsmall = arr[i];
        }
        if (arr[i] > seclarge && arr[i] != large) {
            seclarge = arr[i];
        }
    }

    cout << secsmall << endl;
    cout << seclarge << endl;
}

int main() {
    int arr1[] = {2, 3, 4, 6, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    getelements(arr1, n);
    return 0;
}

