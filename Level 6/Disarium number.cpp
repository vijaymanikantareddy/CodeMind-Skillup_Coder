#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0, len=0;
    cin>>n;
    int temp=n, temp1=n;
    while(temp){
        len++;
        temp/=10;
    }
    for(int i=0 ; i<len ; i++){
        int a= temp1%10;
        sum+= pow(a, len-i);
        temp1/=10;
    }
    if(sum==n){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
