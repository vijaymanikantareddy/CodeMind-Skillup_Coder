#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, sum=0;
    vector<vector<int>> arr;
    vector<int> sumar;
    cin>>m>>n;
    for(int i=0 ; i<m ; i++){
        vector<int> row;
        sum=0;
        for(int j=0 ; j<n ; j++){
            int inp;
            cin>>inp;
            row.push_back(inp);
            sum+=inp;
        }
        sumar.push_back(sum);
        arr.push_back(row);
    }
    for(int i=0 ; i<m ; i++){
        cout<<sumar[i]<<" ";
    }
}
