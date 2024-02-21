#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(arr[i][j]==1){
                    if (arr[i+1][j-1]==0 )
                    {
                        cout<<"SQUARE"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"TRIANGLE"<<endl;
                        break;
                    }
                    
                    
                }
            }
        }
    }
    
return 0;
}