#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> count;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    int ans = 0;
    for (int i = 0; i < 32; i++) {
        int target = 1 << i;
        for (auto p : count) {
            int x = p.first;
            int y = target - x;
            if (x <= y && count.count(y)) {
                if (x != y) {
                    ans += p.second * count[y];
                } else {
                    ans += p.second * (p.second - 1) / 2;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}