#include <bits/stdc++.h>

using namespace std;
void solve()
{
    string s;
    cin >> s;
    int c = 0;
    int n = s.size();
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
                {
                    c++;
                }
            }
        }
    }
    cout << c << endl;
}
int main()
{

    int t;
    t = 1;
    while (t--)
        solve();
    return 0;
}