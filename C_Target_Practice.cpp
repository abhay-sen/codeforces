#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int score =0;
        char arr[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (arr[i][j]=='X')
                {
                    if ((i==0&&j<10)||(i==9&&j<10)||(j==0&&i<10)||(j==9&&i<10))
                    {
                        score+=1;
                    }
                    else if ((i == 1 &&0< j < 9) || (i == 8 && 0<j < 9) || (j == 1 &&0< i < 9) || (j == 8 &&0< i < 9))
                    {
                        score += 2;
                    }
                    else if ((i == 2 && 1< j < 8) || (i == 7 && 1 < j < 8) || (j == 2 && 1 < i < 8) || (j == 7 && 1 < i < 8))
                    {
                        score += 3;
                    }
                    else if ((i == 3 && 2 < j < 7) || (i == 6 && 2 < j < 7) || (j == 3 && 2 < i < 7) || (j == 6 && 2 < i < 7))
                    {
                        score += 4;
                    }
                    else{
                        score+=5;
                    }
                }
                
            }
        }
        cout<<score<<endl;
    }
    
return 0;
}