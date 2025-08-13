#include<bits/stdc++.h>
using namespace std;

int func(int n){
    if (n == 0) {
        return 0;
    } else {
        func(n - 1);           // first go down to smaller numbers
        cout << n << " ";      // then print while coming back
        return 0;
    }
}

int main() {
    func(10);
}
