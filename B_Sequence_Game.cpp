#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        vector<int> solution;
        solution.push_back(b[0]);
        for (int i = 1; i < n; i++)
        {
            if (b[i]<b[i-1])
            {

                solution.push_back(b[i]);
                solution.push_back(b[i]);
            }
            else{
                solution.push_back(b[i]);
            }
        }
        cout<<solution.size()<<endl;
        for (int i = 0; i < solution.size(); i++)
        {
            cout<<solution[i]<<" ";
        }
        cout<<endl;
        
    }
return 0;
}