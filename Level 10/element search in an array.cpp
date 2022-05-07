#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    int n, cnt=0, val;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cin>>val;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==val){
            cnt++;
            break;
        }
    }
    if(cnt==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
}
