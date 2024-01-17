#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin>>a;
    int total=0,minimum=0;
    for (int i = 0; i < a; i++)
    {
        int exiting,entering;
        cin>>exiting>>entering;
        if (total<minimum)
        {
            total=total+entering-exiting;
        }
        else
        {
            minimum=total;
            total=total+entering-exiting;
        }
        
        

    }
    cout<<minimum;
return 0;
}