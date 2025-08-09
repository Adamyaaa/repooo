#include<bits/stdc++.h>
using namespace std;

int HCForGCD(int n1,int n2){
    int gcd =0;
    if(n1==0 || n2==0){
        return max(n1,n2);
    }
    else{
    for ( int i = 1; i <= min(n1,n2); i++)
    {

        if (n1%i==0 && n2%i==0){
            gcd=i;
            
        }

    }
    return gcd;
}
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
  cout<< HCForGCD(n1,n2);
    
    
  
}