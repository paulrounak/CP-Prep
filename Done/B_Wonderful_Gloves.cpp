#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> l(n);
    vector<int> r(n);
    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i<n; i++) {
        cin >> l[i];
    }
    for(int i = 0; i<n; i++) {
        cin >> r[i];
    }

    long long ans = 0;

    for(int i = 0; i < n; i++) {
        a[i] = max(l[i], r[i]);
        b[i] = min(l[i], r[i]);
        ans+=a[i];
    }

    sort(b.rbegin(), b.rend());

    for(int i = 0; i<k-1; i++) 
        ans+=b[i];

    ans++;
    cout << ans << endl;
}

int main () {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}