#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr[] = {2, 3, 4, 5, 7};
    int n = arr.size(); 
    int sum = 0;  

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];  
    }

    cout << sum << endl;

    return 0;
}

