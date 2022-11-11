#include <iostream>
using namespace std;
 
 
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
 
long long check(long long i,long long j){
	if(i==j){
		return 1;
	}else return 0;
} 
void solve() {
	long long int n;
	cin>>n;
	long long int arr[n+1],arr2[n+1];
	int sum=0;
	int sum1=0;
	int zerocount = 0;
	int ls = 0;
	for(long long int i =0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>0){
			arr2[ls] = arr[i];
			sum++;
			ls++;
		}else if(arr[i]<0){
			arr2[ls] = arr[i];
			ls++;
			sum1++;
		}
		
		else{
			zerocount++;
		}
		
	}
//	cout<<"sum"<<sum<<"sum1"<<sum1<<"ls"<<ls;
	
//	for(int i = 0;i<ls;i++){
//		cout<<arr2[i]<<"\n";
//	}
	if(sum>2||sum1>2){
		cout<<"NO"<<"\n";
	}else{
	if(zerocount==n){
		cout<<"YES"<<"\n";
	}
	
	else{
	long long int count = 0;
	long long int result = 0;
	bool isCheck = false;
	bool isLast = false;
 	if(zerocount>0){
 		arr2[ls]= 0;
 		ls++;
	 }
	for(long long int i = 0;i<ls-2;i++){
		for(long long int j = i+1;j<ls-1;j++){
			for(long long int k=j+1;k<ls;k++){
				long long int x = arr2[i]+arr2[j]+arr2[k];
//					cout<<"x"<<x;
					bool isCheck = false;
					for(long long int s = 0;s<ls;s++){
					if(check(arr2[s],x)==1){
							isCheck=true;
							break;		
						}
					}
					if(!isCheck){
						i=n;
						j=n;
						isLast = true;
						break;
					}
			}
		}
	}
 
		if(!isLast){
			cout<<"YES"<<"\n";
		}else{
			cout<<"NO"<<"\n";
		}
	}
 
	}
 
}
 
int main()
{
	long long t;
	cin>>t;
	while(t--) solve();
	return 0;
}