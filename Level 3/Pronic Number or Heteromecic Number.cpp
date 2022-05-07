#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, pr, cnt=0;
    cin>>n;
    for(int i=1; i*i<n ; i++){
        pr = i*(i+1);
        if(pr==n){
            cnt++;
            break;
        }
    }
    cnt==1? cout<<"YES": cout<<"NO";
}
