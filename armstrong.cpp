#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;
    cin>>c;
    int original=c;
    int arm=0;
    while(c>0){
        int ld=c%10;
        c=c/10;
        arm=arm+ld*ld*ld;
    }
    if(arm==original){
        cout<<original<<" is an armstrong";
    }
    else{
        cout<<original<<" is not an armstrong";
    }
}