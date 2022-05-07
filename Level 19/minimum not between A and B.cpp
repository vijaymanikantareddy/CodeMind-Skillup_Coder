#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, min=9999, cnt=0, a, b;
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
            
        }
        else{
            min = min<arr[i]? min: arr[i];
            cnt++;
        }
    }
    if(cnt>0)
        cout<<min;
    else
        cout<<-1;
}
