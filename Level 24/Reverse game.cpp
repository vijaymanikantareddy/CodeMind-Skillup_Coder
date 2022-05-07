#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int res=0, rem;
    while(n){
        rem = n%10;
        res = res*10 + rem;
        n/=10;
    }
    return res;
}
int main()
{
    int n,a;
    cin>>n;
    vector<int> arr;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        arr.push_back(reverse(a));
    }
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
}
