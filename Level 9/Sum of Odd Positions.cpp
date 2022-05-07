#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, sum=0;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0 ; i<arr.size() ; i++){
        if((i-1)%2==0){
            sum+=arr[i];
        }
    }
    cout<<sum;
}
