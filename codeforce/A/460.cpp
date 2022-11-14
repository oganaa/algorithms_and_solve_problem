#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,a,b;
	cin>>n>>a;
	cout<<min(n,a)<<" "<<(max(n,a)-min(n,a))/2;

}