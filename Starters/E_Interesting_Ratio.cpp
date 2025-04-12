// https://codeforces.com/problemset/problem/2091/E

#include <bits/stdc++.h>
using namespace std;

const int n = 10000001;
vector<bool> primes (n, true);

void solve() {
    int ans = 0;
    int x;
    cin >> x;

    for (int i = 0; i <= x; i++) {
        if(primes[i])
            ans += x/i;
    }

    cout << ans << endl;
}

int main () {
    int t;
    cin >> t;

    primes[0] = primes[1] = false;
    for(int i = 2; i < n; i++) {
        if(primes[i] && (long long) i * i < n){
            for (int j = i * i; j < n; j += i) {
                primes[j] = false;
            }
        }
    }

    while (t--) {
        solve();
    }

    return 0;
}