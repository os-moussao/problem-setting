#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

int main() {
	int n; cin >> n;
	int a[n];
	for (int &i: a) cin >> i;
	int ans = INT_MAX;
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] < a[j]) {
				ans = min(ans, a[i]+a[j]);
			}
		}
	}
	cout << (ans==INT_MAX? -1: ans) << endl;
}