#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a, cnt;
    cin>>n;
    bool status = false;
    vector<int> arr;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        arr.push_back(a);
    }
    cin>>a;
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
        if(cnt==a){
            cout<<arr[i]<<" ";
            status = true;
        }
    }
    if(status==false){
        cout<<-1;
    }
}
