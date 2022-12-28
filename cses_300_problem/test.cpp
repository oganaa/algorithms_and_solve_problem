#include<iostream>
using namespace std;
long long int totalsum(long long int a){
	long long int sum =0;
	while(a>0){
		sum = sum +a%10; 
		a=a/10;
	}
	return sum;
}
int main(){
	long long int n, s = 1;
	long long int res=0,result;
	cin>>n;
	long long int r = n;
	bool isAdd = true;
	long long int a;
	while(r>3){
		r=r-3;
		isAdd=!isAdd;
	}
	if(n%3==0){
		a=100;
		result = 3;
	}else if(n%3==1){
		a = 1;
		result = 1;
	}else{
		a = 10;
		result = 2;
	}
	
	while(s<=999){
		int l;
		if(!isAdd){
			l = a - s;
		}else{
			l = a +s;
		}
		if(s%2==0&&s%5==0&&(totalsum(s)+1)%3==0&&(l)%7==0){
			break;
		}
		s++;
	}
	cout<<a;
	long long int c = s,ll=1;
	while(c>0){
		c=c/10;
		ll++;
	}
	for(long long int i = result;i<=n-ll;i++){
		cout<<0;
	}
	cout<<s;
}