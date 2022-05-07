#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, max=-1, a, b;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n ;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cin>>a>>b;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>=a and arr[i]<=b){
            max = max>arr[i]? max: arr[i];
        }
    }
    cout<<max;
}
