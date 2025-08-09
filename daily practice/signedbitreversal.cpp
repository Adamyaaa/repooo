#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int revnum=0;
    //reverse a num
   if(x>0){ while(x>0){
        int lastdigit=x%10;
        x=x/10;
        revnum=(revnum*10)+lastdigit;
    }
    cout<<revnum;
}
    else if (x<0){
        x=-x;
         while(x>0){
        int lastdigit=x%10;
        x=x/10;
        revnum=(revnum*10)+lastdigit;
    }
    cout<<-revnum;
    }
    else {
        cout<<"0";
    }

}