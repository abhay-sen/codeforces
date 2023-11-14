#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        cin >> s1;
        int a= s1.length();
        if (a>10)
        {
            cout << s1[0] << a-2 << s1[a-1]<< endl;
        }
        else
        {
            cout << s1<<endl;
        }
        



    }

}