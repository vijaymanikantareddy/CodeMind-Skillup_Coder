#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<vector<int>> arr1, arr2, res;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        vector<int> row;
        for(int j=0 ; j<n ; j++){
            int inp;
            cin>>inp;
            row.push_back(inp);
        }
        arr1.push_back(row);
    }
    for(int i=0 ; i<n ; i++){
        vector<int> row;
        for(int j=0 ; j<n ; j++){
            int inp;
            cin>>inp;
            row.push_back(inp);
        }
        arr2.push_back(row);
    }
    for(int i=0 ; i<n ; i++){
        vector<int> row;
        for(int j=0 ; j<n ; j++){
            int sum = arr1[i][j]+arr2[i][j];
            row.push_back(sum);
        }
        res.push_back(row);
    }
    for(int i =0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<res[i][j];
            if(j<n-1)
                cout<<" ";
        }
        if(i<n-1)
            cout<<"\n";
    }
}
