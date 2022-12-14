// C++ program to count
// trailing 0s in n!
#include <iostream>
using namespace std;
 
   int trailingZeroes(int n) {
        int fc = 0;
        while(n){
            fc =fc+ n/5;
            n=n/5;
        }
        return fc;
    }
 
// Driver Code
int main()
{
    long long n;
    cin>>n;
    cout << 
         trailingZeroes(n)<<endl;
    return 0;
}