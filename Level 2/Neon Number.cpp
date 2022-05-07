#include<bits/stdc++.h>
using namespace std;
bool isNeon(int n){
    int sum, sq = n*n;
    sq%9==0? sum=9: sum=sq%9;
    return sum==n?1:0;
}
int main(){
    int n;
    cin>>n;
    if(isNeon(n)){
        cout<<"Neon Number";
    }
    else{
        cout<<"Not Neon Number";
    }
}
