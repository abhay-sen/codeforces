#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int d=0;
    while (t--) {
    int a,b,c;
    cin>> a >> b >> c;
    if (a==1 && b==1)
    {
        d++;
    }
    else if (a==1 && c==1)
    {
        d++;
    }
    else if (b==1 && c==1)
    {
        d++;
    }
    else if (a==1 && b==1 && c==1){
        d++;
    }
    }
    cout<<d;

}