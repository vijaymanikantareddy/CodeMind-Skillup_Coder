#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, min;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    min = arr[0];
    for(int i=0 ; i<n ; i++){
        min = min<arr[i]?min : arr[i];
    }
    cout<<min;
}
