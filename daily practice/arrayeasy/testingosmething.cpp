#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int arr1[n];
    
    for (int i = 0; i < n; i++)
    {
      cin>>arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        
            arr1[(i+k)%n]=arr1[i];
        //gone,gone thank you //tyler the creator
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<< " ";
    }
    
    
}
