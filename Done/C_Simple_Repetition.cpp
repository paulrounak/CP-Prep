#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n==1) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n%i == 0) return false;
    }
    return true;
}

void solve() {
    int n, x;

    cin >> n >> x;

    if(n > 1 && x > 1) {
        cout << "NO" << endl;
        return;
    }

    if(n == 1) {
        n = 0;
        for(int i = 0; i<x; i++) {
            n = n*10 + 1;
        }
        cout << (isPrime(n) ? "YES" : "NO") << endl;
        return;
    }

    if(x == 1) {
        cout << (isPrime(n) ? "YES" : "NO") << endl;
        return;
    }    
}

int main () {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}