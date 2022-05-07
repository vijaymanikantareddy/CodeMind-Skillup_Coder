#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int rev =0 , res, temp=n, na = n;
    if(n<0) na = -n;
    while(na){
        res = na%10;
        rev = rev*10 + res;
        na = na/10;
    }
    return temp<0 ? -rev : rev;
}
int square(int n){
    return n*n;
}

int main()
{
    int n;
    cin>>n;
    int rev = reverse(n);
    if(square(n)==reverse(square(rev))){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
