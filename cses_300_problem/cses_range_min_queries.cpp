#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
ll k,l,n;
ll s[2000005],a[1000005];
void construct(ll node,ll left,ll right){
	if(left==right){
		s[node] = a[left];
		return;
	}
	construct(node*2,left,(left+right)/2);
	construct(node*2+1,(left+right)/2+1,right);
	s[node] = min(s[node*2],s[node*2+1]);
}
ll query(ll n,ll l,ll r,ll L,ll R){
	if(l>R||r<L) return INT_MAX;
	if(L<=l&&r<=R) return s[n];
	return min(query(n*2,l,(l+r)/2,L,R), query(n*2+1,(l+r)/2+1,r,L,R));
}
int main(){
	ll k1,k2;
	cin>>n>>k;
	for(ll i = 1;i<=n;i++){
		cin>>a[i];
	}
//	ll t = (n-1);
	construct(1,1,n);
	while(k--){
		cin>>k1>>k2;
		cout<<query(1,1,n,k1,k2)<<endl;
	}
}	
 
