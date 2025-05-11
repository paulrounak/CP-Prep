// https://codeforces.com/contest/2098/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    vector<int> v;

    for(char i: s) {
        v.push_back(i - '0');
    }

    long long ans = 0;

    for(int i = 9; i >= 0; i--) {
        for(int j = i; j <=9; j++) {
            if(find(v.begin(), v.end(), j) != v.end()) {
                ans = ans*10 + j;
                v.erase(find(v.begin(), v.end(), j));
                break;
            }
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}