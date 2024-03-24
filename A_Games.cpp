#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    int count=0;
    int graph[t][2];
    for (int i = 0; i < t; i++)
    {
        cin >> graph[i][0] >> graph[i][1];
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j< t; j++)
        {
            if (graph[i][0]==graph[j][1])
            {
                count++;
            }
        }
        
        
        
    }
    cout<<count;
    
return 0;
}