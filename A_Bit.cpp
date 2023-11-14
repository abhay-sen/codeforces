#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0, y;

    string a;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        cin >> a;
        if (a == "++X")
        {
            ++x;
        }
        else if (a == "X++")
        {
            x++;
        }
        else if (a == "--X")
        {
            /* code */ x--;
        }
        else if (a == "X--")
        {
            /* code */ x--;
        }
    }
    cout << x;
}