#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> a;
    vector<int> b;
    int n =a.size();
    int m=b.size();
for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
   for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> c= a;
    c.insert(a.end(),b.begin(),b.end());
    for (int i = 0; i < m; i++) {
        cout<< c[i]<<" ";
    }
    
}
