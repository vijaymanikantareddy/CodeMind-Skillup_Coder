#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0,k;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cin>>k;
    for(int i=0 ; i<n ;i++){
        sum+= arr[i];
        if(arr[i]==k)
            break;
    }
    cout<<sum;
}
