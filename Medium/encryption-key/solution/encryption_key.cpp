#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	string s; cin >> s;
	int n = s.size();
	char mx = 'a';
	int k = 0;
	for (int i = n-1; i >= 0; i--) {
		int val = (1 << (s[i]-'a'));
		if (mx > s[i]) k -= val;
		else k += val;
		mx = max(mx, s[i]);
	}
	cout << k << endl;
}