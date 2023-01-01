#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define take(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define give(a,n) for(int i=0;i<n;i++){ cout<<a[i]<<' ';}
#define mp make_pair
#define all(v) v.begin(),v.end()
#define SORT(v) sort(all(v))
#define REVERSE(v) reverse(all(v))
#define sz(a) int((a).size())
#define rep(i,n) for(int i=0;i<n;i++)
ll M=1000000000+7;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
vector<ll> x;
 
void solve(){
   ll n, i;
   cin>>n;
   vector<ll> a(n);
   take(a,n); 
   SORT(a);
   for(ll i=1;i<n;i++){
    if(a[i]==a[i-1]){
      cout<<"NO"<<"\n";
      return;
    }
   }
   
 
   for(ll i = 2; i <= n; i++)
   {
        int temp=0;
        vector<ll> v(i,0);
        for(ll j=0;j<n;j++){
          v[a[j]%i]++;
        }
        for(ll j=0;j<i;j++){
          if(v[j]<2){
            temp=1;
          }
        }
        if(!temp){
          cout<<"NO"<<"\n";
          return;
        }
   }
   cout<<"YES"<<"\n";
 
}
 
 
int main(){
 int tts;
 cin>>tts;
    
 
// tts=1;
  while(tts--){
    solve();
    }
} 