#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
 
	while(n>0)
	{
		if(n%10 == 1)
			n = n/10;
		else if(n%100 == 14)
			n = n/100;
		else if(n%1000 == 144)
			n = n/1000;
		else
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
 
	cout<<"YES"<<endl;
	return 0;
}