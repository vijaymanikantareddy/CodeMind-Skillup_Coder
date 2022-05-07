#include<bits/stdc++.h>
using namespace std;
bool spynum(int n){
    int sum=0, pro=1;
    while(n){
        sum+= n%10;
        pro*= n%10;
        n/=10;
    }
    return sum==pro? true: false;
}
int main()
{
    int n;
    cin>>n;
    if(spynum(n)){
        cout<<"Spy Number";
    }
    else{
        cout<<"Not Spy Number";
    }
}
