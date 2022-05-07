#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    bool status = false;
    vector<int> arr;
    int cnt;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0 ; i<n ; i++){
        cnt=1;
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]==-1)
                continue;
            if(arr[i]==arr[j]){
                arr[j]=-1;
                cnt++;
            }
        }
        if(arr[i]==-1)
            continue;
        cout<<arr[i]<<" "<<cnt<<" ";
    }
}
