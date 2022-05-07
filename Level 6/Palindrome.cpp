#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int rev =0 , res;
    while(n){
        res = n%10;
        rev = rev*10 + res;
        n = n/10;
    }
    return rev;
}
int main()
{
    int n;
    cin>>n;
    if(n<0){
        cout<<"False";
    }
    else{
        if(reverse(n)==n){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
    }
}
