#include<bits/stdc++.h>
using namespace std;
long long N = 10000000;
vector<bool> primes(10000000, true);
void Dell(){
	primes[0]=primes[1]=false;
	for(int i=2 ; i*i < N ; i++){
		if(primes[i]==true){
			for(int j=i*i ; j <= N ; j+= i){
				primes[j]=false;
			}
		}
	}
}
bool megaprime(int n){
    if(primes[n]==false){
        return false;
    }
    while(n){
        int res = n%10;
        if(primes[res]==false){
            return false;
        }
        n/=10;
    }
    return true;
}

int main(){
	Dell();
	int n;
	cin>>n;
	megaprime(n)? cout<<"Mega Prime":cout<<"Not Mega Prime";
	return 0;
}
