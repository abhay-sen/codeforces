#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x,k,t;
    cin>> t;
    int b,g;
    while (t--)
    {
        cin >>n>>x>>k;
        b=x%k;
        g=(n-x)%k;
        if(b>g){
            cout<<b-g<<endl;
        }
        else if (g>b)
        {
            cout<<g-b<<endl;
        }
        else{
            cout<<0<<endl;
        }
        


    }
    

}