#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n; cin >> n;
	int a[n];
	for (int &i: a) cin >> i;
	sort(a, a+n);
	int ans = 1e9;
	for (int i = 0; i < n/2; i++) {
		ans = min(ans, a[i+n/2]-a[i]);
	}
	cout << ans;
}