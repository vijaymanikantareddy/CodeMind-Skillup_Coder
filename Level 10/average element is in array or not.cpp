#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, avg=0,cnt=0;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        arr.push_back(a);
        avg += a;
    }
    avg = avg/n;
    for(int i=0 ; i<n ; i++){
        if(avg==arr[i]){
            cnt++;
            break;
        }
    }
    if(cnt==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
