#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main()
{
  int t;
  cin >> t;
  while (t--)
  {
        int n,x;
      cin>>n>>x;
      int a[n+1];
      if(n%x!=0){
          cout<<-1<<endl;
      }
      else if(n==x){
          cout<<n<<" ";
          for(int i=2;i<n;i++){
              cout<<i<<" ";
          }
          cout<<1<<endl;
      }
      else{
          a[x]=n;
          a[1]=x;
          a[n]=1;
          for(int i=2;i<n;i++){
              if(i!=x)
              a[i]=i;
          }
          a[x]=n;
          a[n]=1;
          for(int i=x+1;i<n;i++){
              if(a[i]%x==0 && a[x]>a[i] && a[x]%i==0){
                  swap(a[i],a[x]);
                  x=i;
              }
          }
          for(int i=1;i<=n;i++){
              cout<<a[i]<<" ";
          }
          cout<<endl;
      }
  }
}
