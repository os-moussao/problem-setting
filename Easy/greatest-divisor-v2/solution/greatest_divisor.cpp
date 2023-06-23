#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl '\n'

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	if (n < 0) {
		cout << -n << endl;
	} else {
		for (int i = n-1; i >= 1; i--) {
			if (n % i == 0) {
				cout << i << endl;
				return 0;
			}			
		}
	}
}