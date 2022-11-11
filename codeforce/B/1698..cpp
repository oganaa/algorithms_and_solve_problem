#include <iostream>
#include <math.h>
using namespace std;
long long int t, n;
int main()
{
    cin >> n;
    long long int res[n + 1];
    for (int j = 0; j < n; j++)
    {
        cin >> t;
        long long int x;
        long long int k;
        long long int arr[t + 1];
        cin >> k;

        for (long long int i = 0; i < t; i++)
        {
            cin >> arr[i];
        }
        if (k == 1)
        {
            if (t % 2 == 1)
            {
                res[j] = t / 2;
            }
            else
            {
                res[j] = t / 2 - 1;
            }
        }
        else
        {
            long long int count = 0;
            for (long long int i = 1; i < t - 1; i++)
            {
                if (arr[i - 1] + arr[i + 1] < arr[i])
                {
                    count++;
                }
            }
            res[j] = count;
            //			cout<<count<<"\n";
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << "\n";
    }
}

// 1 2 3 4 5 6 7 8