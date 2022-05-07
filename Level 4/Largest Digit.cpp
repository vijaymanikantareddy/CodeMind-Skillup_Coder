#include<bits/stdc++.h>
using namespace std;
int largest(int n){
    int res, max = n%10;
    while(n){
        res = n%10;
        max = max>res? max: res;
        n/=10;
    }
    return max;
}

int main()
{
    int n;
    cin>>n;
    cout<<largest(n);
}
