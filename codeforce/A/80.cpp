#include <bits/stdc++.h>
using namespace std;

int t, n, cnt[26];
string s;

int main() {
  cin >> t;
  while (t--) {
    cin >> n >> s;
    memset(cnt, 0, sizeof cnt);
    for (char c : s) cnt[c-'a']++;
    sort(cnt, cnt+26, greater<int>());
    int ans = 0;
    for (int i = 0; i < 26; i++) {
      if (cnt[i] == 0) break;
      if (i < 13) ans += cnt[i];
    }
    cout << ans << endl;
  }
  return 0;
}