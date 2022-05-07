#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, sumeven=0, sumodd=0;
    vector<vector<int>> arr;
    cin>>m>>n;
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
            if(arr[i][j]%2==0){
                sumeven+=arr[i][j];
            }
            else{
                sumodd+=arr[i][j];
            }
        }
    }
    cout<<sumeven<<" "<<sumodd;
}
