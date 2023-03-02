#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c= 0;
int main(){
	int n,m,k;
	cin>>n;
	ll sum = 0;
	multiset<ll> mset;
	for(int i = 0;i<n;i++){
		cin>>k;
		if(mset.size()==0){
			mset.insert(k);
		}else{
			auto it = mset.upper_bound(k);
			if(it==mset.end()){
				mset.insert(k);
			}else{
				mset.erase(it);
				mset.insert(k);
			}
		}
	}
	cout<<mset.size();
	
	return 0;
}