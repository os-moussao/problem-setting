#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q; cin >> n >> q;

	long long ans = 0;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		ans += (i%2 == 0)? a: -a;
	}
	while (q--) {
		int x; cin >> x;
		ans += n*x;
		cout << ans << '\n';
	}
}