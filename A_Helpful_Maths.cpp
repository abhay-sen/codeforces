#include <bits/stdc++.h>
#include <strings.h>
using namespace std;
string setAlternate(string s){
    int n = (s.length()/2)+1 ;
    string alternate,original=s;
    for (int i=0;i<n;i++) {
        alternate += original[2*i];
    }
    sort(alternate.begin(), alternate.end());
    return alternate;

}
string setOriginal(string o){
    string original= o;
    string alternate=setAlternate(original);
    int n = (original.length()+1)/2;
    for (int i = 0; i < n; i++)
    {
        original[2*i]=alternate[i];
    }
    return original;
    

}
int main() {
    string original;
    
    cin >> original;
    
    
    original = setOriginal(original);
    cout<< original ;
    return 0;

}