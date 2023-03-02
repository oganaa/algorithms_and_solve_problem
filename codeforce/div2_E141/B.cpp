#include <iostream>

using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[100][100]={0};
	int d=1;
	int d1 = n*n;
	int m=n; //
	int l=1;
	int i,j;
 	int d2 = 1;
// j == bagana
// i == mur
	while(d<=n*n){
		i=l;
		for(j=l;j<=m;j++){
			d++;
			if((i+j)%2==0){
				a[i][j]=d2;
				d2++;
			}else {
				a[i][j]=d1;
				d1--;
			}
		
		}
		j=m;
		for(i=l+1;i<=m;i++){
			if((i+j)%2==0){
				a[i][j]=d2;
				d2++;
			}else {
				a[i][j]=d1;
				d1--;
			}
			d++;
		}
		i=m;
		for(j=m-1;j>=l;j--){
		if((i+j)%2==0){
				a[i][j]=d2;
				d2++;
			}else {
				a[i][j]=d1;
				d1--;
			}
			d++;
		}
		j=l;
		for(i=m-1;i>=l+1;i--){
			if((i+j)%2==0){
				a[i][j]=d2;
				d2++;
			}else {
				a[i][j]=d1;
				d1--;
			}
			d++;
		}
			l++;
			m--;
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 