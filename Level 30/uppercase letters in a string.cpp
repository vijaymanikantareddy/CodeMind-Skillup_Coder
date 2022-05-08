#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s;
    getline(cin, s);
    int cnt=0;
    for(int i=0 ; i<s.size() ; i++){
        if(isupper(s[i])){
            cnt++;
        }
    }
    cout<<cnt;
}
