#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a=0, b=1, c;
    cin>>n;
    if(n==0 or n==1){
        cout<<"True";
    }
    else{
        while(true){
            c=a+b;
            a = b;
            b = c;
            if(c==n){
                break;
            }
            else if(c>n){
                break;
            }
        }
        if(c==n){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
    }
}
