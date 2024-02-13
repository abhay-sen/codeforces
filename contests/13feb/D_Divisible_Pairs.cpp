#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t;cin>>t;
    while (t--)
    {
        long long int count=0;
        long long x,y,a=0;
        cin>>count>>x>>y;
        long long int arr[count];
        for (int i = 0; i < count; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < count; i++)
        {
            for (int i = 0; i < count-1; i++)
            {
                for (int j = i+1; i < count; j++)
                {
                    if ((arr[i]+arr[j])%x==0&&(arr[i]-arr[j])%y==0)
                    {
                        a++;
                    }
                    
                }
                
            }
            
        }
        
        cout<<a<<endl;

    }
    
return 0;
}