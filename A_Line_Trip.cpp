#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n,k; cin >>n>>k;
        int arr[n+2];
        arr[0]=0;
        arr[n+1]=k;
        for (int i = 1; i < n+1; i++)
        {
            cin>>arr[i];
        }
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            arr1[i]=arr[i+1]-arr[i];
        }
        sort(arr1,arr1+n);
        int min=arr1[n-1];
        if(arr1[n-1]>2*(k-arr[n])){
            cout<<arr1[n-1]<<endl;
        }
        else
        {
            cout<<2*(k-arr[n])<<endl;
        }
        
    }
    

return 0;
}