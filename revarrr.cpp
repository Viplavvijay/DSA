#include<iostream>
using namespace std;

void printarr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] ;
    }
    cout << endl;
}

void reversearr(int arr[], int n) {
    int ans[n];
    for(int i = 0; i < n; i++) {
        ans[i] = arr[n - i - 1];
    }
    printarr(ans, n);
}

int main() {
    int n = 5;
    int arr1[] = {2, 3, 5, 6, 7};
    reversearr(arr1, n);
    return 0;
}
