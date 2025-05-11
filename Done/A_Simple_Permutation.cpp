// https://codeforces.com/problemset/problem/2089/A

#include <bits/stdc++.h>
using namespace std;

int primes_n = 1e7 + 1;
vector<bool> primes(primes_n, true);

void sieve() {
    primes[0] = primes[1] = false;

    for(int i = 2; i < primes_n; i++) {
        if(primes[i] && (long long) i * i < primes_n) {
            for (int j = i * i; j < primes_n; j+=i) {
                primes[j] = false;
            }
        }
    }
}

void solve () {
    int n;
    cin >> n;

    if (n < 6) {
        cout << 2 << " ";
        for(int i = 1; i<=n; i++) {
            if(i == 2) continue;
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    int l = max(1, n / 3);
    int r = 2 * ceil(n / 3);

    int p = 2;

    for (int i = l; i < r; i++) {
        if(primes[i]) {
            p = i;
            break;
        }
    }

    vector<bool> nos (n+1, false);
    int cp = p;
    for(int i = 1; i <= 2*(n/3 - 1); i++) {
        int id = (i+1)/2;
        cout << cp << " ";
        nos[cp] = true;
        cp = p + (i % 2 == 0 ? id : -id);
    }

    for(int i = 1; i <= n; i++) {
        if(!nos[i])
            cout << i << " ";
    }

    cout << endl;
}

int main () {
    int t;
    cin >> t;
    sieve();
    while (t--) {
        solve();
    }

    return 0;
}