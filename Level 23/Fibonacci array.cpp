#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool status = false;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n ;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    for(int i=1 ; i<n-1 ; i++){
        if(arr[i-1]+arr[i]==arr[i+1]){
            status = true;
        }
        else{
            status = false;
            break;
        }
    }
    status? cout<<"yes": cout<<"no";
}
