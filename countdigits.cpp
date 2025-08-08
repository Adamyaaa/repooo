#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int count =0;
  while(N>0){
        int lastdigit =N%10;
        N=N/10;
    count++;
  }
cout <<count;
}