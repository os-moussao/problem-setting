#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s; cin >> s;
	int h[256] = {0};
	for (char c: s) {
		h[c]++;
	}
	int odd = 0;
	for (int i: h) {
		odd += i%2;
	}
	cout << (odd <= 1? "YES": "NO");
}