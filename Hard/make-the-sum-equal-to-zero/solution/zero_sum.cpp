#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> memo;

int can(vector<int> &a, int i, int sum) {
	if (sum < 0) return 0;
	int &ret = memo[i][sum];
	if (ret != -1) return ret;
	if (sum == 0) return ret = 1;
	if (i==(int)a.size()) return ret = 0;
	return ret = (can(a, i+1, sum-a[i]) || can(a, i+1, sum));
}

int main() {
	int n; cin >> n;
	vector<int> a(n);
	int sum = 0;
	for (int &i: a) {
		cin >> i;
		i = abs(i);
		sum += i;
	}
	if (sum%2) {
		cout << "NO";
		return 0;
	}
	memo = vector<vector<int>> (n+1, vector<int> (sum/2 + 1, -1));
	cout << (can(a, 0, sum/2)? "YES": "NO");
}