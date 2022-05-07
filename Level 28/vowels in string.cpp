#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s;
    getline(cin, s);
    int cnt=0;
    char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
    for(int i=0 ; i<s.size() ; i++){
        for(int j=0 ; j<10 ; j++){
            if(s[i]==vowel[j]){
                cout<<vowel[j]<<" ";
                vowel[j]='1';
                cnt++;
            }
        }
    }
    if(cnt==0){
        cout<<-1;
    }
}
