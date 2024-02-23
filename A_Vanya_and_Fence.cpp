#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t;
    cin>>n>>t;
    int arr[n];
    int length=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]>t)
        {
            length+=2;
        }
        else
        {
            length++;
        }
        
    }
    cout<<length;
    
return 0;
}