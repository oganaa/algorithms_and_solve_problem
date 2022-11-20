#include<bits/stdc++.h>
using namespace std;

main()
{  	
	int n;
	
	cin>>n;
	
	vector<pair<int,int>> p;
	for(int i = 1 ;i<=n;i++){
		int a,b;
		cin>>a>>b;
		p.push_back({a,b});
	}		
	bool isAns = 0;
	for(int i = 0 ;i<p.size();i++){
		if(p[i].first<p[i].second){
			isAns=1;
		}
	}
	if(isAns)
		cout<<"Happy Alex";
		else cout<<"Poor Alex";
	return 0;
}