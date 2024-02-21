#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n; cin >>n; 
        int arr[n-1];
        int count=0;
        for (int i = 0; i < n - 1; ++i){
            cin >>arr[i];
            count =count+arr[i];
            }
            cout<<count*(-1)<<endl;
    }
return 0;
}