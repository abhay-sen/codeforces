#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    char alphabets[26]= {'a','b','c','d','e','f','g','h','i','j', 'k', 'l', 'm', 'n' ,'o','p','q','r','s','t','u','v','w','x','y','z'};
    while(t--) {
        int a;cin>>a;
        if (a>2&&a<29)
        {
            cout<<"aa"<<alphabets[a-3]<<endl;
        }
        else if (a>28&&a<54)
        {
            cout<<"a"<<alphabets[a-28]<<"z"<<endl;
        }
        else if (a>53)
        {
            cout<<alphabets[a-53]<<"zz"<<endl;
        }
        
        
    }
return 0;
}