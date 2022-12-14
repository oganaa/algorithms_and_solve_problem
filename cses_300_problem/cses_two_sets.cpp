#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
	ll n;
	cin>>n;
	if(n==1){
		cout<<"NO"<<endl;
		return;
	}
	ll a = n*(n+1)/2;
	vector<ll> array(n+1,1);
	if(a%2==0){
		cout<<"YES"<<endl;
		if(n==3){
			cout<<2<<endl;
			cout<<"1 2"<<endl;
			cout<<1<<endl;
			cout<<"3"<<endl;
		}else if(n==4){
			cout<<"2"<<endl;
			cout<<"1 4"<<endl;
			cout<<"2"<<endl;
			cout<<"2 3"<<endl;
		}else{
			ll index = 0;
			ll tempn=n;
			ll temp = a/2;
			ll tempmin =1;
			bool isadd=true;
			while(temp>=n){
				if(isadd){
					array[tempn]=0;
					temp=temp-tempn;
					tempn--;
					isadd= false;
				}else{
					array[tempmin]=0;
					temp=temp-tempmin;
					tempmin++;
					isadd= true;
				} 
				
				index++;
			
			}
			ll ansIndex;
			if(temp!=0){
				array[temp] = 0;
				ansIndex= index+1;
			}else {
				ansIndex=index;
			}
			
			
			cout<<ansIndex<<endl;
			for(int i=1;i<=n;i++){
				if(array[i]%2==0) cout<<i<<" ";
			}
			cout<<endl;
			cout<<n-ansIndex<<endl;
			for(int i=1;i<=n;i++){
				if(array[i]%2==1) cout<<i<<" ";
			}
			cout<<endl;
//			cout<<"3"<<endl;
//			cout<<n<<" ";
//			cout<<n-3<<endl;
		}
		
	}
	else cout<<"NO"<<endl;
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 
