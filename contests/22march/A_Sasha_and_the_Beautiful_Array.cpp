#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--)
    {
        int n;cin>>n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long int sumarr1=0,sumarr2=0;
        for (int i = 1; i < n; i++)
        {
            sumarr1=sumarr1+arr[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            sumarr2=sumarr2+arr[i];
        }
        cout<<sumarr1-sumarr2<<endl;


    }
    
return 0;
}