// https://codeforces.com/problemset/problem/2091/A

#include <bits/stdc++.h>

using namespace std;

void solve() {
    unordered_map<int, int> mp;
    mp[0] = 3;
    mp[1] = 1;
    mp[3] = 1;
    mp[2] = 2;
    mp[5] = 1;

    int total = 8;

    int n;
    cin>>n;
    int c;
    int ans = 0;
    for(int i = 0; i<n; i++){
        cin>>c;
        if(mp[c] > 0 && total>0) {
            mp[c]--;
            total--;
        }
        if(total) ans++;
    }

    if(total) cout << 0 << endl;
    else cout << ans+1 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}