#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
	
//	cin>>n;

//	bool isIncrease = true;	
//	int cnt = 2;
//	for(int i = 1;i<n;i++){
//		cnt = cnt + 2;  
//	}
//	for(int i = 0;i<n;i++){
//		if(isIncrease){
//			ll s = arr[i][i];
//			
//			for(int j = i-1;j>=0;j--){
//				s++;
//				arr[j][i] = s; 
//			}
//			ll s1 = arr[i][i];
//			for(int j = i-1;j>=0;j--){
//				s1--;
//				arr[i][j] = s1;	
//			}
//			isIncrease = false;
//		}  else{
//			ll s = arr[i][i];
//			for(int j = i-1;j>=0;j--){
//				s--;
//				arr[j][i] = s; 
//			}
//			ll s1 = arr[i][i];
//			for(int j = i-1;j>=0;j--){
//				s1++;
//				arr[i][j] = s1;	
//			}
//			isIncrease = true;
//		}
//	}
	ll x,y;
	cin>>x>>y;
	ll mx = max(x,y);
	ll ans =1;
	ll  i =1;
//	for(i = 1;i<mx;i++){
//		ans = ans+cnt;
//		cnt = cnt +2;
//	}
	ans = mx*mx-mx+1;	
	if(x>=y&&x%2==0){
		cout<<ans+(mx-y)<<endl;		
	}else if(x>=y&&x%2==1){
		cout<<ans-(mx-y)<<endl;		
	}else if(x<y&&y%2==0){
		cout<<ans-(mx-x)<<endl;	
	}else {
		cout<<ans+(mx-x)<<endl;	
	}

}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}	
 
