#include<bits/stdc++.h>
using namespace std;
bool ispalin(int n){
    if(n<0) return false;
    int rev=0, res, temp=n;
    while(n){
        res = n%10;
        rev = rev*10 + res;
        n/=10;
    }
    return rev==temp? true: false;
}
int main()
{
    int n, a, cnt=0;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        if(ispalin(a)){
            cnt++;
        }
    }
    cout<<cnt;
}
