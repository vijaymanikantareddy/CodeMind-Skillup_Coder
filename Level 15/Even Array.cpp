#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    bool status = true;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n ;i++){
        int a;
        cin>>a;
        arr.push_back(a);
        if(a%2!=0){
            status = false;
        }
    }
    status? cout<<"True": cout<<"False";
}
