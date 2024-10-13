#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int c=0;
        for (int i = 0; i < n; i++)
        {
            int test=c;
            c += arr[i];
            test += arr[i];
            test = abs(test);
            
            if(arr[i+1]<0&&i<n-1){
                c += arr[i+1];
                test += arr[i+1];
                test = abs(test);
                if (test > c)
                {
                    c = test;
                }
                i++;
            }
            else if (test > c)
            {
                c = test;
            }
        }
        cout<<c<<endl;
        
        
    }
    
return 0;
}