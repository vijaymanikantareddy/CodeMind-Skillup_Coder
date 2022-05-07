#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, suma=0, sumb=0;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        if(i<(n/2)){
            suma+= arr[i];
        }
        else{
            sumb += arr[i];
        }
    }

    cout<<suma<<"\n"<<sumb;
}
