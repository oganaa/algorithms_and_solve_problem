#include <bits/stdc++.h>
using namespace std;

int n;
int arr [1000];
int a[100][100];
void rotate()
{
 
 
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
 
            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
}
 
void print()
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
 
int main()
{

	int s;
	int lr=0;
	while (cin>>s) { 
		arr[++lr]=s;
    }
    n = sqrt(lr);
//	cout<<lr;
	
//	cout<<n;
	int l = 0;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			a[i][j] = arr[++l];
			
		}
	}
//    cout<<"j";
    rotate();
    print();
    return 0;
}