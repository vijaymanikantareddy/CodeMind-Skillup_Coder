#include<bits/stdc++.h>
using namespace std;
int gcd(int x, int y){
    if(y>x){
        x=x+y;
        y = x-y;
        x = x-y;
    }
    if(x==1 or y==1){
        return 1;
    }
    if(x%y==0){
        return y;
    }
    return gcd(x-y, y);
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b);
}
