#include <iostream>
#include <string>

using namespace std;

int main() {
  // Read in the number of test cases
  int t;
  cin >> t;
  
  // Process each test case
  while (t--) {
    // Read in the number of trophies and the string of lamps
    int n;
    string lamps;
    cin >> n >> lamps;
    
    // Flag to track whether we need to perform an operation
    bool need_operation = false;
    int i;
    // Iterate through the lamps from left to right
    for (i = 0; i < lamps.size() - 1; i++) {
      // If we see two consecutive lamps directed to the left, we need to perform an operation
      if (lamps[i] == 'L' && lamps[i + 1] == 'L') {
        need_operation = true;
        break;
      }
      // If we see a lamp directed to the right followed by a lamp directed to the left, we need to perform an operation
      if (lamps[i] == 'R' && lamps[i + 1] == 'L') {
        need_operation = true;
        break;
      }
    }
    
    // If we need to perform an operation, output "0" and the index of the operation
    if (need_operation) {
//      cout << 0 << endl;
      cout << i + 1 << endl;
    }
    // Otherwise, output "0"
    else {
      cout << 0 << endl;
    }
  }
  
  return 0;
}