#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, avg=0, cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        avg+=arr[i];
    }
    avg /= n;
    for(int i=0 ; i<n ; i++){
        if(arr[i]<=avg) 
            cnt++;
    }
    cout<<cnt;
}
