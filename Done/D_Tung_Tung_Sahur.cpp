// https://codeforces.com/problemset/problem/2094/D

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, p;
    cin >> s >> p;

    vector<int> v, vp;
    vector<char> chs, chp;

    char c = s[0];
    int count = 1;
    for(int i = 1; i < s.length(); i++) {
        if(s[i] == c) {
            count++;
        } else {
            v.push_back(count);
            chs.push_back(c);
            c = s[i];
            count = 1;
        }
    }
    v.push_back(count);
    chs.push_back(c);

    c = p[0];
    count = 1;
    for(int i = 1; i < p.length(); i++) {
        if(p[i] == c) {
            count++;
        } else {
            vp.push_back(count);
            chp.push_back(c);
            c = p[i];
            count = 1;
        }
    }
    vp.push_back(count);
    chp.push_back(c);

    if (v.size() != vp.size()) {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < v.size(); i++) {
        if (chs[i] != chp[i] || vp[i] < v[i] || vp[i] > v[i] * 2) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main () {
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }

    return 0;
}