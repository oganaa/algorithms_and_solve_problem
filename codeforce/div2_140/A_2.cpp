#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	double x1,y1,x2,y2,x3,y3,s1,s2,s3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	map<int,int> mpX;
	map<int,int> mpY;
	mpX[x1]++;
	mpX[x2]++;
	mpX[x3]++;
	mpY[y1]++;
	mpY[y2]++;
	mpY[y3]++;
	if(mpX.size()==2&&mpY.size()==2){
			cout<<"NO"<<endl;
		}else cout<<"YES"<<endl;
	

}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}