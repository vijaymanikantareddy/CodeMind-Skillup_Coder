#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, a, cnt=0;
    cin>>n>>k;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        if(a%k!=0){
            cnt++;
        }
    }
    cout<<cnt;
}
