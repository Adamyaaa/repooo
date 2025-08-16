#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int k;
    cin>>n>>k;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        
            arr2[(i+k)%n]=arr1[i];
        //gone,gone thank you //tyler the creator
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr2[i]<< " ";
    }
    
    
}
