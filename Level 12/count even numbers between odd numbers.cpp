#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, cnt=0;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0 ; i<arr.size() ; i++){
        if(arr[i]%2==0 and arr[i+1]%2!=0 and arr[i-1]%2!=0){
            cnt++;
        }
    }
    cout<<cnt;
}
