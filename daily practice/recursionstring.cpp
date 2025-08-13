#include<bits/stdc++.h>
using namespace std;

int printbasic(string a,int N){
   if( N>0){
    cout<<a<<endl;
   
    printbasic(a,N-1);
   } 
}
int  main() {
    int N;
    cin>>N;
    printbasic("chicha",N);
    
}