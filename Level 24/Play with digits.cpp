#include<bits/stdc++.h>
using namespace std;
int sumofdigits(int n){
    int sum=0;
    while(n){
        sum+= n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n, a, sum=0;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        sum+=sumofdigits(a);
    }
    cout<<sum;
}
