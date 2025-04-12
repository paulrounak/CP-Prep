// https://codeforces.com/problemset/problem/2091/D

#include <bits/stdc++.h>
using namespace std;

void solve () {
    long long n, m, k;

    cin >> n >> m >> k;

    long long newK = ceil(k*1.0/n);
    if(newK <= ceil(m/2.0)) {
        cout << 1 << endl;
    }
    else {
        cout << (long long)ceil(newK * 1.0 / (m - newK + 1)) << endl;
    }
}

int main () {
    int t; 
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}