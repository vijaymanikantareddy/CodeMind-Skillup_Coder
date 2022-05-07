#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,a, sum=0;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int inp;
        cin>>inp;
        arr.push_back(inp);
    }
    cin>>a>>b;
    for(int i=0 ; i<n ; i++){
        if(arr[i]<a or arr[i]>b){
            sum+=arr[i];
        }
    }
    cout<<sum;
}
