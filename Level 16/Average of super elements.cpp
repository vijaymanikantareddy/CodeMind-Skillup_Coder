#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt, a;
    double sum=0, avg;
    cin>>n;
    bool status = false;
    vector<int> arr, res;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0 ; i<n ; i++){
        cnt=1;
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]==-1)
                continue;
            if(arr[i]==arr[j]){
                arr[j]=-1;
                cnt++;
            }
        }
        if(cnt==arr[i]){
            res.push_back(arr[i]);
            sum+= arr[i];
            status = true;
        }
    }
    if(status==false){
        cout<<-1;
    }
    else{
        cout<<fixed<<setprecision(2)<<sum/res.size();
    }
}
