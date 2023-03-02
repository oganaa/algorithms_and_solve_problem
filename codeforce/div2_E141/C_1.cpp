#include <iostream>
#include <algorithm>

int main() {
  // Read the number of test cases
  int t;
  std::cin >> t;

  while (t--) {
    // Read n and m
    int n, m;
    std::cin >> n >> m;

    // Read the preparation times
    int a[n];
    for (int i = 0; i < n; i++) {
      std::cin >> a[i];
    }

    // Sort the preparation times in decreasing order
    std::sort(a, a + n, std::greater<int>());

    // Calculate the maximum number of wins
    int wins = 0;
    int preparation_time = 0;
    for (int i = 0; i < n; i++) {
      // Check if we have enough time to prepare for this match
      if (preparation_time + a[i] > m) {
        break;
      }
      preparation_time += a[i];
      wins++;
    }

    // Print the minimum possible place
    std::cout << wins + 1 << std::endl;
  }

  return 0;
}