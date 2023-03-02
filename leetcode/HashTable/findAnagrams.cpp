#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	string p;
	vector<int> answer;
	vector<int> hash(26,0);
	vector<int> phash(26,0);
	cin>>s>>p;
	int window = p.size();
	int len = s.size();
	if(len<window){
		return 0;
	}
	int left = 0;
	int right = 0;
	while(right<window){
		phash[p[right]-'a']+=1;
		hash[p[right]-'a']+=1;
		right++;
	}
	right--;
	
	while(right<len){
		if(phash==hash){
			ans.push_back(left);
		}
		right+=1;
		if(right!=len){
			hash[s[right]-'a']=+1;
		}
		hash[s[left]-'a']=-1;
		left = left +1;
	}
	

	
	
	
//	sort(p.begin(),p.end());
//	for(int i = 0;i<=ss-ps;i++){
//		string str = s.substr(i,ps);
//		sort(str.begin(),str.end());
//		if(str==p){
//			answer.push_back(i);
//		}
//	}
//	for(int i = 0;i<answer.size();i++){
//		cout<<answer[i]<<" ";
//	}
	
}