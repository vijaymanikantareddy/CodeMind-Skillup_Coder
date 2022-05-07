#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin>>n;
    vector<int> arr;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        arr.push_back(a);
    }
    int sea, cnt=0;
    cin>>sea;
    for(int i=0 ; i<arr.size() ; i++){
        if(arr[i]==sea){
            cnt++;
        }
    }
    cout<<cnt;
}
