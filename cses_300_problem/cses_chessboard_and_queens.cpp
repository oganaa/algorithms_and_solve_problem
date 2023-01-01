#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c=0,n=8;
char chess[8][8];
int r1[100],r2[100],r3[100];
void search(int y) {
	if (y == n) {
		c++;
		return;
	}
	for (int x = 0; x < n; x++) {
		if (chess[x][y]=='.'&&r1[x]==0&&r2[x+y]==0 && r3[x-y+n-1]==0){
			r1[x] = r2[x+y] = r3[x-y+n-1] = 1;
			search(y+1);
			r1[x] = r2[x+y] = r3[x-y+n-1] = 0;
		}
		
		
	}
}
int main(){
	int t=1;
	
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			cin>>chess[i][j];
		}	
	}
	
	search(0);
	
	cout<<c;
}	
 
