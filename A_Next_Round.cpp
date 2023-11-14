#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;

    cin>>n>>k;
    int t=n;
    int scores[n];
    for(int i=0;i<n;i++){
        cin>>scores[i];

    }
    for (int j = 0; j < n; j++)
    {
        if (scores[j]<=0)
        {
            /* code */t--;
        }
        
        
        else if (scores[j]<scores[k-1])
        {
            t--;
        }
        
    }
    cout<<t<<endl;
}
