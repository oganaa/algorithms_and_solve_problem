#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll m,s,s1;
	cin>>m>>s;
	if(m==1&&s==0){
		cout<<"0"<<" "<<"0"<<endl;
		return;
	}
	s1 =s;
	int i = 0;
	string str;
	string str2;
	while(i<m){
		
		if(s>0){
			if(s>9){
				str = str+"9";
				s = s - 9;
			}else{
				
				str = str + to_string(s); 
				s = 0;
			
			}
		}else{
			str = str + "0";
		}
		i++;
	}
	i = 0;
	while(i<m){
		
		
		i++;
	}

	if(str[0]=='0'||s>0){
		cout<<-1<<" "<<-1;
	}else{
//		string str2 ;
//		for(int i = 0;i<str.size();i++){
//			if(str[i]!='0'){
//
//				str2=str2+str[i];
//			}
//		}
//		reverse(str2.begin(),str2.end());
		
//		for(int i =str2.size();i<str.size();i++ ){
//			str2.insert(str2.begin()+1,'0');  
//		}
		
		cout<<str2<<" "<<str<<endl;
	}
	
	
}
int main(){
	int t=1;
	while(t--){
		solve();
	}
}