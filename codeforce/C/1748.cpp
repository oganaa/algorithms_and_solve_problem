#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,a;
	cin>>n;
	bool isZero = false;
	vector<ll> vec;
	for(int i = 0;i<n;i++){
		cin>>a;
		
		vec.push_back(a);
		if(vec[i]==0) isZero =true;
	}
//	if(n==1){
//		if(vec[0]==0)
//    		cout<<"1"<<endl;
//    	else 	cout<<"0"<<endl;
//    	return;
//	}
	map<int,int> answer;
	ll sum = 0;
	ll before= -1;
	for(int i = 0;i<n;i++){
		sum = sum + vec[i];	
		answer[sum]++;
		if()
		
	}

	if(isZero==true){
			int maxI = 0;
			bool isAdd = false;
			bool isOne = false;
			for (auto itr = answer.begin(); itr != answer.end(); ++itr) {
//				cout<<itr->first<<" "<<itr->second<<endl;
				maxI=max(itr->second,maxI);
		    }
		    cout<<maxI<<endl;
//		    if(!isOne&&!isAdd) cout<<maxI<<endl;
//		    else if(isOne&&!isAdd) cout<<maxI<<endl;
//		    else if(!isOne&&isAdd) cout<<maxI<<endl;
//		    else if(isOne&&isAdd)cout<<maxI-1<<endl;
//			else  cout<<maxI-1<<endl;
	}else{
		cout<<answer[0]<<endl;
	}
	
	
	

//	cout<<"***********************"<<endl<<"*******************"<<endl;
	
}
int main()
{
	int t = 1;
	cin>>t;
	while (t--)
	{
		solve();
	}
}
