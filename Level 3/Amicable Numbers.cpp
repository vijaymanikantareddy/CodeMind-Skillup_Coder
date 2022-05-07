#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, suma=1, sumb=1;
    cin>>a>>b;
    for(int i=2 ; i<=a/2 ; i++)
        if(a%i==0)  suma+= i;
    for(int i=2 ; i<=b/2 ; i++)
        if(b%i==0)  sumb+= i;
    (suma==b and sumb==a)? cout<<"Amicable" : cout<<"Not Amicable";
}
