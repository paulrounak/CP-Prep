// https://codeforces.com/problemset/problem/2096/A

#include <bits/stdc++.h>
using namespace std;

void solve () {
    int n;
    string s;

    cin >> n >> s;

    vector<int> v(n, 0);

    int sc = 1;
    int bc = n;

    for(int i = n-1; i > 0; i--) {
        if(s[i-1] == '<') {
            v[i] = sc;
            sc++;
        }
        else {
            v[i] = bc;
            bc--;
        }
    }

    int sum = (n*(n+1))/2;
    int actual = accumulate(v.begin(), v.end(), 0);
    v[0] = sum - actual;

    for(int i: v){
        cout << i << " ";
    }
    cout<<endl;
}

int main () {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}