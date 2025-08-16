#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    //array declrade 
    int m=sizeof(arr)/sizeof(arr[0]);
    int big =0;
   
    for (int i =0;i<n;i++){
        if (arr[i]>big){
            big=arr[i];
        }
       
    }
    sort(arr, arr+m);
    cout << arr[n-2]<<endl;
    
    cout<<big;
    
}
