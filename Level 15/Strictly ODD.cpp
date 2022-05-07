#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,a, cnt=0;
    vector<int> arr;
    cin>>n;
    bool status = true;
    for(int i=0 ; i<n ; i++){
        int inp;
        cin>>inp;
        arr.push_back(inp);
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2!=0 and i%2==0){
            status = false;
        }
    }
    status? cout<<"True":cout<<"False";
}
