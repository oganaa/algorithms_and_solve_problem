#include<bits/stdc++.h> 
using namespace std; 
main(){ 
int i,j,k,l,n,a[20];
 cin>>n>>k; l=0; 
 for(i=1; i<=n; i++) a[i]=i; 
 do{l++; if (l==k) {for(i=1; i<=n; i++) cout<<a[i]<<' ';
  exit(0); } 
 }
 while(next_permutation(a+1,a+n+1));
  }