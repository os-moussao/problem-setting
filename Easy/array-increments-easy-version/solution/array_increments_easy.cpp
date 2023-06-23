#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll *a, int n) {
	ll val = 0;
	for (int i = 0; i < n; i++) {
		if (i%2 == 0) {
			val += a[i];
		} else {
			val -= a[i];
		}
	}
	return val;
}

int main() {
	int n, q; cin >> n >> q;
	ll a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	while (q--) {
		int x; cin >> x;
		for (int i = 0; i< n; i++) {
			if (i % 2 == 0) {
				a[i] += x;
			} else {
				a[i] -= x;
			}
		}
		cout << f(a, n) << '\n';
	}
}