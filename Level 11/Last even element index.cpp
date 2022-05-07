#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=arr.size()-1; i>=0 ; i--){
        if(arr[i]%2==0){
            cout<<i;
            break;
        }
    }
}
