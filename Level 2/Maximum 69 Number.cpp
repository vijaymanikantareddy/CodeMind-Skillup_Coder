#include<bits/stdc++.h>
using namespace std;
int maximum69Number (int num) {
        vector<int> ve;
        int temp=num, len=0, res=0;
        while(temp){
            ve.push_back(temp%10);
            temp/=10;
            len++;
        }
        reverse(ve.begin(), ve.end());
        for(int i=0 ; i<ve.size() ; i++){
            if(ve[i]==6){
                ve[i]=9;
                break;
            }
        }
        for(int i=0 ; i<ve.size() ; i++)
        {
            res += ve[i]*pow(10, len-i-1);
        }
        return res;
    }
    
int main()
{
    int n;
    cin>>n;
    cout<<maximum69Number(n);
}
