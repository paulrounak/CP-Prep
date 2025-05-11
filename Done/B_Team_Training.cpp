// https://codeforces.com/problemset/problem/2091/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> vec(n);

    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }

    sort(vec.rbegin(), vec.rend());

    int ans = 0;
    int minimum = INT_MAX;

    int wsize = 0;

    for(int i = 0; i<n; i++) {
        minimum = min(minimum, vec[i]);
        wsize++;
        if(minimum * wsize >= x) {
            wsize = 0;
            ans++;
            minimum = INT_MAX;
        }
    }    

    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}