#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s;
    getline(cin, s);
    int cnts=0, cntc=0;
    char small[5]={'a','e','i','o','u'};
    char cap[5] = {'A','E','I','O','U'};
    for(int i=0 ; i<s.size() ; i++){
        for(int j=0 ; j<5 ; j++){
            if(s[i]==small[j]){
                small[j]='1';
                cnts++;
            }
        }
        for(int j=0 ; j<5 ; j++){
            if(s[i]==cap[j]){
                cap[j]='1';
                cntc++;
            }
        }
    }
    if(cnts==5 or cntc==5){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
