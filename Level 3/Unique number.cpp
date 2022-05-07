#include<bits/stdc++.h>
using namespace std;
bool uni(int n){
    vector<int> ve;
    while(n){
        ve.push_back(n%10);
        n/=10;
    }
    sort(ve.begin(), ve.end());
    for(int i=0 ; i<ve.size()-1 ; i++){
        if(ve[i]==ve[i+1]){
            return false;
        }
    }
    
    return true;
}
int main(){
    int n;
    cin>>n;
    if(uni(n)){
        cout<<"Unique Number";
    }
    else{
        cout<<"Not Unique Number";
    }
}
