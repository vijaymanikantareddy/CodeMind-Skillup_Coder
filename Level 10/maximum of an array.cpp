#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, max;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    max = arr[0];
    for(int i=0 ; i<n ; i++){
        max = max>arr[i]?max : arr[i];
    }
    cout<<max;
}
