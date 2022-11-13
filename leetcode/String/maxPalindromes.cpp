#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPalindrome(string s){
	string p = s;
 
    // Reverse the string P
    reverse(p.begin(), p.end());
     if (s == p) {
        // Return "Yes"
        return true;
    }
    // Otherwise
    else {
        // return "No"
        return 0;
    }
}
void solve()
{
	ll k;
	cin>>k;
	string s;
	cin>>s;
	int c = 0;
	int n = s.size();
	int sum = 0;
	while(k<n||s.size()<k){
		for( int i = 0 ; i <n-k;  ++i ) {
			for(int j=i;j<n-k;j++){
				if(isPalindrome(s.substr(j,k))){
					sum ++;
					s.erase(j,k);
					j = 0;
				}
			}
		}
		k++;
	}

	cout<<sum;
}
int main()
{
	int t = 1;
	while (t--)
	{
		solve();
	}
}
