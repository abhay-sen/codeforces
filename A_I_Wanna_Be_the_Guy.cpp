#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int k;cin>>k;
    vector<int> arr(k);
    for (int i = 0; i < k; i++)
    {
        int a;cin>>a;
        arr.push_back(a);
    }
    int l;cin>>l;
    vector<int> brr(l);
    for (int i = 0; i < l; i++)
    {
        int a;cin>>a;
        brr.push_back(a);
    }
    vector<int> crr=arr;
    for (int i = 0; i < brr.size(); i++)
    {
        int flag=0;
        for (int j = 0; j < crr.size(); j++)
        {
            if(brr[i]==crr[j]){
                flag++;
            }
        }
        if(flag==0) crr.push_back(brr[i]);
        
    }
    int sum=(n*(n+1))/2;
    for (int i = 0; i < crr.size(); i++)
    {
        sum-=crr[i];
    }
    if (sum==0)
    {
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
    
    
    
    

return 0;
}