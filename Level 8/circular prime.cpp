#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	bool res = true;
	if(n==0 or n==1){
		return false;
	}
	for(int i=2 ; i<=n/2 ; i++){
		if(n%i==0){
			res = false;
			break;
		}
	}
	return res;
}
int leng(int n){
	int le = 0;
	while(n){
		le++;
		n/=10;
	}
	return le;
}

bool circle(int n){
	bool b=true;
	int temp = n, rem, le = leng(n), c = leng(n);
	while(c){
		rem = n%10;
		n/=10;
		n = n+rem*pow(10, le-1);
		if(!isprime(n)){
			b = false;
			break;
		}
		c--;
	}
	return b;
}

int main()
{
	int n;
	cin>>n;
	if(circle(n)){
		cout<<"circular prime";
	}
	else if(isprime(n)){
		cout<<"prime but not a circular prime";
	}
	else{
	    cout<<"not prime";
	}
}
