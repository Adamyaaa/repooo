#include <bits/stdc++.h>
using namespace std;

const int mod=998244353;

long long modpow(long long a, long long b){
    long long r=1;
    while(b){
        if(b&1) r=(r*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return r;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;    
        vector<long long> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        int x=0;
        for(int i=0; i<n; i++){
            x^=(a[i]%2);
        }
        if (x==0){
            cout<<0<<"\n";
                 }
        else {
            long long abcd=modpow(2,mod-2);
            cout<<abcd<<"\n";
          }
    }
    return 0;
}
