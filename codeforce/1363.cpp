#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a,b,c;
	cin>>a>>b;
	int odd=0,even= 0;
	while(a--){
		cin>>c;
		if(c%2==1)
			odd++;
		else even++;
	}
	if(odd == 0)
	{
		cout<<"No"<<endl;
	}else if(even==0&&b%2==1){
		cout<<"Yes"<<endl;
	}
	else if(odd-b>=0&&b%2==1){
		cout<<"Yes"<<endl;
	}else if(odd%2==1){
		cout<<"Yes"<<endl;
	}
	
	
	else if(odd-1+even>=b){
		cout<<"Yes"<<endl;
	}
	else cout<<"No"<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
    	solve();
	}

}