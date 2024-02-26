#include <bits/stdc++.h>
using namespace std;
int main() {
    int count;cin>>count;
    int array[count];
    for (int i = 0; i < count; i++)
    {
        cin>>array[i];
    }
    int moduloarray[count];
    for (int i = 0; i < count; i++)
    {
        if (array[i]>=0)
        {
            moduloarray[i]=array[i];
        }
        else
        {
            moduloarray[i]=(-1)*array[i];
        }
        
        
    }
    sort(moduloarray,moduloarray+count);
    
    cout<<moduloarray[0]<<endl;
    
    
return 0;
}