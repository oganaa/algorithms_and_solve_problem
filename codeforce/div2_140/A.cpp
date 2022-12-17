#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	double x1,y1,x2,y2,x3,y3,s1,s2,s3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
//	vector<double> vec(3);
//  	s1 = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
//    s2 = sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
//    s3 = sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
//	vec[0] = s1;
//	vec[1] = s2;
//	vec[2] = s3;
	if((x1>x2&&x3>x1)||(x2>x1&&x3>x2)||(x3>x1&&x2>x3)||(y1>y2&&y3>y1)||(y2>y1&&y3>y2)||(y3>y1&&y2>y3)||
		(x2>x1&&x1>x3)||(x1>x2&&x2>x3||x1>x3&&x3>x2||y2>y1&&y1>y3)||(y1>y2&&y2>y3||y1>y3&&y3>y2)){
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	
//	sort(vec.begin(),vec.end());
//	cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<" ";
//	double ans = s1*s1+s2*s2;
//	double ans1=s3*s3;
//	ans = sqrt(ans);
//	if(ans!=ans1){
//		cout<<"YES"<<endl;
//	}else{
//		cout<<"NO"<<endl;
//	}

}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}