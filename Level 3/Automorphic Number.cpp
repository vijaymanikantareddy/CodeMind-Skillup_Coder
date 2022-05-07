#include<bits/stdc++.h>
using namespace std;
int len(long long n){
    int cnt=0;
    while(n){
        cnt++;
        n/=10;
    }
    return cnt;
}

bool automorphic(int n){
    int size = pow(10, len(n));
    long long sq=n*n;
    int ld = sq%size;
    if(ld==n){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    automorphic(n)? cout<<"Automorphic Number": cout<<"Not an Automorphic Number";
}
