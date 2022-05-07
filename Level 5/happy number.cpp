#include<bits/stdc++.h>
using namespace std;

int squares(int n){
    return n*n;
}
int recur(int n){
    int sum=0, res;
    while(n){
        res = n%10;
        sum+= squares(res);
        n/=10;
    }
    return sum<=4? sum : recur(sum);
}

bool isHappy(int n) {
    return recur(n)==1? true: false;
}


int main()
{
    int n;
    cin>>n;
    isHappy(n)? cout<<"True" : cout<<"False";
}
