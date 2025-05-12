#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string s;
    vector<bool> cols(m);

    bool rows;
    bool grid = true;

    for(int i = 0; i<n; i++) {
        cin >> s;
        rows = false;

        for(int j = 0; j<m; j++) {
            if(s[j] == '0') cols[j] = rows = true;
            else if (cols[j] && rows){
                grid = false;
            }
        }
    }

    cout << (grid ? "YES" : "NO") << endl;
}

int main () {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}