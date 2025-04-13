// https://codeforces.com/problemset/problem/2094/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    getline(cin, s);

    string ans = "";
    ans += s[0];

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') ans+=s[i+1];
    } 

    cout << ans <<endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        solve();
    }
    return 0;
}