#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char vowels[5]={'a','e','i','o','u'};
    getline(cin, s);
    int cnt=0;
    for(int i=0 ; i<s.size() ; i++){
        for(int j=0 ; j<5 ; j++){
            if(s[i]==vowels[j]){
                vowels[j]='1';
                cnt++;
            }
        }
    }
    if(cnt!=5){
        for(int i=0 ; i<5 ; i++){
            if(vowels[i]!='1'){
                cout<<vowels[i]<<" ";
            }
        }
    }
    else{
        cout<<0;
    }
    
}
