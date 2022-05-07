#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, sum=0;
    vector<vector<int>> arr;
    cin>>m>>n;
    int sumar[n]={0};
    for(int i=0 ; i<m ; i++){
        vector<int> row;
        for(int j=0 ; j<n ; j++){
            int inp;
            cin>>inp;
            row.push_back(inp);
        }
        arr.push_back(row);
    }
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(i!=0 and j!=0 and i!=m-1 and j!=n-1){
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum;
}
