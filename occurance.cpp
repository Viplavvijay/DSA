#include<iostream>
using namespace std;

void countOccurrences(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        bool isUnique = true;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            int count = 0;
            for(int k = 0; k < n; k++) {
                if(arr[i] == arr[k]) {
                    count++;
                }
            }
            cout << arr[i] <<":" << count << endl;
        }
    }
}

int main() {
    int n = 5;
    int arr1[] = {2, 3, 5, 6, 5};
    countOccurrences(arr1, n);
    return 0;
}
