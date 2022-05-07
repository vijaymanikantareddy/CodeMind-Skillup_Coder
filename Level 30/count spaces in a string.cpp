#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    int cnt=0;
    for(int i=0 ; i<a.size() ; i++){
        if(a[i]==' '){
            cnt++;
        }
    }
    cout<<cnt;
}
