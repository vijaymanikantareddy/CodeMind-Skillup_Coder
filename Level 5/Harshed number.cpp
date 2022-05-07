#include<bits/stdc++.h>
using namespace std;
int dell(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int sum = dell(n);
    if(n%sum==0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
