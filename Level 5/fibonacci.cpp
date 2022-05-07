#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a=0, b=1, c;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=2; i<n ; i++){
        c=a+b;
        a = b;
        b = c;
        cout<<c<<" ";
    }
}
