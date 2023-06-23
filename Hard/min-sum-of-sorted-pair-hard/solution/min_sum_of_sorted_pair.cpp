#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

int mergeSort(int *a, int n) {
	if (n==1) return INT_MAX;
	int ans = min(mergeSort(a, n/2), mergeSort(a+n/2, n-n/2));
	for (int i = n/2; i < n; i++) {
		if (a[i] > a[0]) {
			ans = min(ans, a[i]+a[0]);
		}
	}
	int b[n];
	int k = 0, i = 0, j = 0;
	while (i< n/2 && (n/2 + j < n)) {
		if (a[i] <= a[n/2 + j]) {
			b[k++]=a[i++];
		} else {
			b[k++]=a[n/2 + j++];
		}
	}
	while (i < n/2) {
		b[k++]=a[i++];
	}
	while (n/2 + j < n) {
		b[k++]=a[n/2 + j++];
	}
	for (i = 0; i < n; i++) {
		a[i]=b[i];
	}
	return ans;
}

int main() {
	int n; cin >> n;
	int a[n];
	for (int &i: a) cin >> i;
	int ans = mergeSort(a, n);
	cout << (ans==INT_MAX? -1: ans) << endl;
}