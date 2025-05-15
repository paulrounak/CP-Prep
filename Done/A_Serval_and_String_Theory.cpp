#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if(*max_element(s.begin(), s.end()) == *min_element(s.begin(), s.end())) {
        cout << "NO" << endl;
        return;
    }

    string p = s;
    reverse(s.begin(), s.end());

    if(k == 0 && s <= p) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    return;
}

int main () {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}