#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, sum=0;
    vector<vector<int>> arr;
    cin>>m>>n;
    int sumcol[n]={0}, sumrow[m]={0};
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
            sumcol[j]+=arr[i][j];
            sumrow[i]+=arr[i][j];
        }
    }
    int max=sumcol[0];
    for(int i=1 ; i<n ; i++)
        max = max>sumcol[i]? max: sumcol[i];
    for(int i=0 ; i<m ; i++)
        max = max>sumrow[i]? max: sumrow[i];
    cout<<max;
}
