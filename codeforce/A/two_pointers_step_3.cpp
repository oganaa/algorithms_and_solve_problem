#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define fi first
#define se second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int ttt; cin >> ttt;
    // while(ttt--) {
        

        
    // }
   int n,m;
   cin>>n>>m;
   vector<int>a(n),b(m);
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<m;i++)cin>>b[i];
   ll int cnt=0;
   int i=0,j=0;
   while(i<n&&j<m){
       if(a[i]<b[j])i++;
       else if(a[i]>b[j])j++;
       else{
           int t = i;
           ll int p=0;
           while(a[i]==b[j])i++,p++;
           cnt+=p;
            while(j+1<m&&b[j]==b[j+1])j++,cnt+=p;
            j++;
       }

   }
   cout<<cnt<<"\n";
    return 0;
}