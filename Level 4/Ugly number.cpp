#include<bits/stdc++.h>
using namespace std;
bool ugly(int n){
    while(n%2==0 && n>1){
        if(n==1)
            break;
        n/=2;
    }
    while(n%3==0 && n>1){
        if(n==1)
            break;
        n/=3;
    }
    while(n%5==0 && n>1){
        if(n==1)
            break;
        n/=5;
    }
    return n==1? true: false;
}
int main()
{
    int n;
    cin>>n;
    ugly(n)?cout<<"Ugly Number": cout<<"Not Ugly Number";
}
