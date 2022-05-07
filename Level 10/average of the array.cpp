#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double avg=0;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        arr.push_back(a);
        avg +=(double) a;
    }
    avg =(double) avg/n;
    
    cout<<fixed<<setprecision(2)<<avg;
}
