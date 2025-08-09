#include<bits/stdc++.h>
using namespace std;

int main(){
    int c;
    cin>>c;
    for (int i = 1; i <=sqrt(c); i++)
    {
        if(c%i==0 ){
            cout<<i<<" ";
            if(c/i!=i){
                cout<< c/i<< " ";
                //a vector list is needed to sort them 
            }
            
        }
    }
    
}