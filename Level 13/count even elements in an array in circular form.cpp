#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=0;
    cin>>n;
    vector<int> arr;
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    arr.push_back(arr[0]);
    for(int i=1 ; i<=n ; i++){
		
        if((arr[i-1]%2==0 and arr[i+1]%2!=0) or (arr[i-1]%2!=0 and arr[i+1]%2==0)){
		cnt++;
	    }
    }
    cout<<cnt;
}
