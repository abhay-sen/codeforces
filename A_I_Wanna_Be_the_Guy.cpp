#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sizeone;
    cin>>sizeone;
    vector<int> playerone(sizeone);
    for (int i = 0; i < sizeone; i++)
    {
        int x;
        cin>>x;
        playerone[i]=x;
    }
    int sizetwo;
    cin >> sizetwo;
    vector<int> playertwo(sizetwo);
    for (int i = 0; i < sizetwo; i++)
    {
        int x;
        cin >> x;
        playertwo[i] = x;
    }
    vector<int> arr;
    for (int i = 1; i <=n; i++)
    {
        arr.push_back(i);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
    }
    

return 0;
}