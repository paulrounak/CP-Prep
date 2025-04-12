// https://codeforces.com/problemset/problem/2092/Ay

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i = 0; i<n; i++) {
        cin >> v[i];
    }
    
    int m = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());

    cout << m - mn << endl;
}

int main () {
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
    return 0;
}