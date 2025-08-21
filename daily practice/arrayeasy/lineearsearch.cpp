#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == m) {
            index = i;   // store the index
            break;       // stop searching once found
        }
    }//kiss of life by sade

    cout << index; // print result once (either found index or -1)

    return 0;
}
