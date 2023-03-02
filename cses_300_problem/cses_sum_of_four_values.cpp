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
	for (int i = 0; i < vec.size(); i++){
            for(int j = i+1; j < vec.size(); j++){
                int k = j + 1;
                int l = vec.size() - 1;
                while (k < l) {
                    //by writing below 4 statement this way it will not give runtime error
                    long long int sum = vec.at(i).first;
                    sum += vec.at(j).first;
                    sum += vec.at(k).first;
                    sum += vec.at(l).first;
                    if (sum == target) {
                        cout<<vec.at(i).second<<" "<<vec.at(j).second<<" "<<vec.at(k).second<<" "<<vec.at(l).second;
					return 0;
                    } else if (sum < target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }

	cout << "IMPOSSIBLE" << endl;
	
	
	return 0;
}