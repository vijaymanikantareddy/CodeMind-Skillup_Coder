#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    int cnt=0;
    getline(cin, s);
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U')
        {
            cnt++;
        }
    }
    cout<<cnt;
}
