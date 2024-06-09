#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for (int cols = 0; cols < 2*n; cols++)
        {
            for (int row = 0; row < 2*n; row++)
            {
                if((row/2+cols/2)%2==0){
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
                
            }
            cout<<endl;
        }
        
    }
return 0;
}