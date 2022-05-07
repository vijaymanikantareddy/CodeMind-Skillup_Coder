#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool status = true;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n ;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    for(int i=1 ; i<n ; i++){
        if(arr[i]<=arr[i-1]){
            status = false;
        }
    }
    status? cout<<"yes": cout<<"no";
}
