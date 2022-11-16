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
	i=0;
	while(i<m){
		
	
		if(s1>0){
			int oron=(m-i-1)*9+1;
			if(oron>=s1){
			
			if(str2.size()>0&&str[0]=='1'){
				str2 = str2 +"0";
			}else{
				str2= str2+"1";
					s1--;
			}
		
		}else{
				int o = m-i;
				int temp =  s1 -( (o-1)*9);
				str2 = str2+to_string(temp);
				s1 = s1 -temp;
			}
		}
		else {
			str2 = str2 + "0";
		}
		i++;
	}
	if(str[0]=='0'||s>0){
		cout<<-1<<" "<<-1;
	}else{
		cout<<str2<<" "<<str<<endl;
	}
	
	
}
int main(){
	int t=1;
	while(t--){
		solve();
	}
}