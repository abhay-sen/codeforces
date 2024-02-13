#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--)
    {
        int count,flag=0,n;
        cin>>count;
        int sum = 0;
        int arr[count];
        for (int i = 0; i < count; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < count; i++)
        {

            sum = sum + arr[i];
        }
        n=sum/count;
        flag=arr[count-1]-n;
        if (count==1)
        {
            cout<<"YES"<<endl;
        }
        else if (flag>0)
        {
            cout<<"NO"<<endl;
        }
        

        
        
        
        else
        {
            cout<<"YES"<<endl;
        }
        
        
    }
    
return 0;
}