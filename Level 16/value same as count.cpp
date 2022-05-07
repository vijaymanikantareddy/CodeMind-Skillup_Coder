#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a, cnt, res=0;
    cin>>n;
    vector<int> arr;
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
        if(cnt==arr[i])
            res++;
    }
    cout<<res;
}
