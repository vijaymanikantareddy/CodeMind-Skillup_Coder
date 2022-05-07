#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for(int i=s.size()-1 ; i>=0 ; i--){
        cout<<s[i];
    }
}
