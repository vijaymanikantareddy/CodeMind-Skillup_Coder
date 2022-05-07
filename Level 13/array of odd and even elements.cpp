#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,n;
    vector<int> ve, res, even;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        ve.push_back(a);
        if(a%2!=0){
            res.push_back(a);
        }
        else{
            even.push_back(a);
        }
    }
    for(int i=0 ; i<even.size() ; i++){
        res.push_back(even[i]);
    }
    for(int i=0 ; i<n ; i++){
        cout<<res[i]<<" ";
    }
}
