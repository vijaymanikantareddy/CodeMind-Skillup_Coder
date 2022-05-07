#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, sume=0, sumo=0;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0 ; i<arr.size() ; i++){
        if(i%2!=0){
            sume+=arr[i];
        }
        else{
            sumo+=arr[i];
        }
    }
    cout<<abs(sumo-sume);
}
