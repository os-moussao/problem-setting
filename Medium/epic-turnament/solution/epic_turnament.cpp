#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> a(n);
    vector<bool> b(n);
    for (string &s: a) {
        cin >> s;
    }
    for (int i = 0; i < n; i++) {
        if (b[i]) continue;
        int k = 0;
        for (int j = i; j < n; j++) {
            if (a[i]==a[j]) k++, b[j]=1;
        }
        cout << a[i] << ' ' << k << endl;
    }
}