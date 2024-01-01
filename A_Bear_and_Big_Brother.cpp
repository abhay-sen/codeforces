#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,x=0;
    cin>>a;
    cin>>b;
    do
    {
        x++;
    }while(((pow(3,x))*a) <= ((pow(2,x))*b));
    cout<<x;
    


    
return 0;
}