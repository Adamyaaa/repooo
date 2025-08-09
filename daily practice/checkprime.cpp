#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x <= 1) {
        cout << x << " is not a prime";
        return 0;
    }
    if (x == 2) {
        cout << x << " is a prime";
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(x); i++) { // Only check up to sqrt(x)
        if (x % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << x << " is a prime";
    else
        cout << x << " is not a prime";

    return 0;
}
