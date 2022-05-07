#include<bits/stdc++.h>
using namespace std;
int sqre(int n){
    for(int i=1 ; i*i<=n ; i++){
        if(i*i==n){
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    sqre(n)? cout<<"True": cout<<"False";
}
