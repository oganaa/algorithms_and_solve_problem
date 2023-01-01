#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c= 0;
vector<pair<int,int>> x;
void towerHanoi(int n,int src,int aux,int dest)
{
	if(n==1){
		x.push_back(make_pair(src,dest));
		return;
	}
		
		
	towerHanoi(n-1,src,dest,aux);
	x.push_back(make_pair(src,dest));
//	cout<<src<<" "<<dest<<endl;
	towerHanoi(n-1,aux,src,dest);
}
int main(){
	int t;
	cin>>t;
	
	towerHanoi(t,1,2,3);
	cout<<x.size()<<endl;
	for(auto c:x){
		cout<<c.first<<" "<<c.second<<endl;
	}
	return 0;
}	
 
