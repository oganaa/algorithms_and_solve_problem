#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,t,S=0,i,j,c=0,d=0,b,k;
int main()
{cin>>n;
a[0]=0;
for(i=1;i<=n;i++)
{cin>>a[i];
if(a[i]>a[i-1])d++;
else{c=max(c,d);d=1;}}
cout<<max(c,d);
return 0;}
