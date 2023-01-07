#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Read input
    int n;
    cin >> n;
    int weights[n];
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    // Sort weights in increasing order
    sort(weights, weights + n);

    // Initialize variables
    int min_diff = INT_MAX;
    int group1_weight = 0;

    // Try all possible divisions of the apples into two groups
    for (int i = 1; i < n; i++) {
        group1_weight += weights[i - 1];
        int group2_weight = 0;
        for (int j = i; j < n; j++) {
            group2_weight += weights[j];
        }
        int diff = abs(group1_weight - group2_weight);
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    // Print result
    cout << min_diff << endl;

    return 0;
}
