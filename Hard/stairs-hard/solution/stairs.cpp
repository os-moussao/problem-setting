#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
	int n; cin >> n;
	int lo = 1, hi = (1LL << 32) - 1, ans;
	while (lo <= hi) {
		int mid = lo + (hi-lo)/2;
		if ((mid*(mid+1))/2 <= n) {
			ans=mid, lo=mid+1;
		} else {
			hi=mid-1;
		}
	}
	cout << ans;
}