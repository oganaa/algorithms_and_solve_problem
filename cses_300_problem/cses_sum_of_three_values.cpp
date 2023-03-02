#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,target;
	cin>>n>>target; 
	vector<pair<int, int>> vec;
	for(int i = 1; i <= n; i++){
		int a; cin >> a;
		pair<int, int> p; p.first = a; p.second = i;
		// first in pair represents value, second represents index
		vec.push_back(p);
	}
	set<vector<int>> s;
	sort(vec.begin(), vec.end());
	for(int i = 0;i<n;i++){
		int j = i +1;
		int k =  n-1;
		while(j<k){
			long long sum = vec.at(i).first+ vec.at(j).first+vec.at(k).first;
			if(sum==target){
				cout<<vec.at(i).second<<" "<<vec.at(j).second<<" "<<vec.at(k).second;
				return 0;
				
			}else if(sum<target){
				j++;
			}else{
				k--;
			}
		}	
	}
	cout << "IMPOSSIBLE" << endl;
	
	
	return 0;
}