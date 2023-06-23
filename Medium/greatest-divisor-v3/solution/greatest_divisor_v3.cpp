#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n;
    ll smallest_divisor = n;
    for (ll i = 2; i*i <= n; i++) {
        if (n%i == 0) {
            smallest_divisor = i;
            break ;
        }
    }
    cout << n/smallest_divisor;
}