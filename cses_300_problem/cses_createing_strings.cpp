#include<bits/stdc++.h>
using namespace std;

set<string> uset;
void permute(string& a, int l, int r)
{
    if (l == r)
    	uset.insert(a);
    else {

        for (int i = l; i <= r; i++) {
 

            swap(a[l], a[i]);
 
       
            permute(a, l + 1, r);
 
            
            swap(a[l], a[i]);
        }
    }
}
 
int main(){
	string s;
	cin>>s;
	int n = s.size();
	permute(s,0,n-1);
	cout<<uset.size()<<endl;
	for(auto it =uset.begin();it!=uset.end();it++){
		cout<<*it<<endl;
	}
	
	
	return 0;
}
