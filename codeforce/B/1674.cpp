#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n;
	string s;
	 map<string, int> idx;
	string w = "aa";
	int i = 1;
	for(w[0] = 'a'; w[0] <= 'z'; w[0]++)
        for(w[1] = 'a'; w[1] <= 'z'; w[1]++)
            if(w[0] != w[1])
                idx[w] = i++;
                
   

	cin >> s;
	cout << idx[s] << endl;
	     
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
