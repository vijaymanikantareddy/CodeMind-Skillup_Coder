#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    int in=-1;
    getline(cin, s);
    char a;
    cin>>a;
    for(int i=0 ; i<s.size() ; i++){
       if(s[i]==a){
           in = i;
           break;
       }
    }
    if(in!=-1)
        cout<<"True\n"<<in;
    else
        cout<<"False";
}
