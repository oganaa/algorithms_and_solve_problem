#include <bits/stdc++.h>
using namespace std;
#define ll long long
 #define MOD 1000000007
void solve()
{
    string s;
    cin>>s;
    vector<int> a(26);
    for(char c1 : s) a[c1 - 'A']++;
	ll c = 0;
	string ans="";
	string ans2="";
	pair<char,ll> p;
	string middle="";
	int check = 0;
    for(int i = 0; i < 26; i++) check += (a[i] % 2);
    if(check > 1){
        cout << "NO SOLUTION";
        return ;
    }
    string result;
    for (int i = 0; i < 26; i++){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) result.push_back(i + 'A');
        }
    }
    for (int i = 0; i < 26; i++){
        if(a[i]%2){
            for(int j = 0; j < a[i]; j++) result.push_back(i + 'A');
        }
    }
    for (int i = 25; i >= 0; i--){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) result.push_back(i + 'A');
        }
    }

    cout << result << endl;

	
    
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 
