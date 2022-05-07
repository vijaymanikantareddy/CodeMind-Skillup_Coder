#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0;
    bool res = true;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        if(arr[i]!=0 and arr[i]!=1)
            res = false;
    }
    
    res? cout<<"True" : cout<<"False";
}
