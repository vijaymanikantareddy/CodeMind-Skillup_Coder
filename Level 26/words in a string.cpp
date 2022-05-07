#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int cnt=1;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]==' ')   cnt++;
    }
    cout<<cnt;
}
