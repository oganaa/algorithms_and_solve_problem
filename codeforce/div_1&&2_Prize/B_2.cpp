/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;





int solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    int count=0;
    for(auto x:v){
        if(x>(n+k-1)/k){
            cout<<"NO"<<endl;
            return 0;
        }
        else if(x==(n+k-1)/k && n%k!=0){
            count++;
        }
    }
    if(count>n%k){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0;
}
int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}
