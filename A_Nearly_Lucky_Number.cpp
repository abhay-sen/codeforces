#include <bits/stdc++.h>
using namespace std;
int numofluckydigits(long long int n){
    int count=0;
    while (n!=0)
    {
        if (n%10==4||n%10==7)
        {
            count++;
        }
        n/=10;
    }
    return count;

}
int luckynumber(int count){
    int k=0;
    while (count!=0)
    {
        if (count%10==4||count%10==7)
        {
            k=1;

        }
        else
        {
            k=0;
            break;
        }
        
        
        count/=10;
    }
    return k;
}
int main() {
    long long int a;
    cin>>a;

    int k= numofluckydigits(a);
    if (luckynumber(k)==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    

return 0;
}