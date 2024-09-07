#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {2, 4, 3, 5, 7, 8};
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < n / 2; i++) {
        cout << arr[i];
    }
    for(int i = n - 1; i >= n / 2; i--) {
        cout << arr[i];
    }
    return 0;
}
