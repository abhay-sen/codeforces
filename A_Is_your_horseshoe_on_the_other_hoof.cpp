#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> hoof;
    int count=0;
    for (int i = 0; i < 4; i++)
    {
        int a;cin>>a;
        hoof.push_back(a);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if(hoof[i] == hoof[j]) {
                count++;
                break;
            }
        }
        
        
    }
    cout<<count;

return 0;
}