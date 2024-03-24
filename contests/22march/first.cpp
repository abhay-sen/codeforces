#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        vector<int> brr =arr;
        sort(brr.begin(),brr.end());
        int key= brr[n/2];
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==key) count++;
        }
        cout<<count<<endl;

        
    }
    
return 0;
}