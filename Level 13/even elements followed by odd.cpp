#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0 ; i<n ; i++)
        if(arr[i]%2==0)
            cout<<arr[i]<<" ";
    for(int i=0 ; i<n ; i++)
        if(arr[i]%2!=0)
            cout<<arr[i]<<" ";
}
