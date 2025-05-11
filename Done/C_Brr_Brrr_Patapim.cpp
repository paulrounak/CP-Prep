// https://codeforces.com/problemset/problem/2094/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> v(2*n, 0);
    int s;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> s;
            v[i+j-1] = s;
        }   
    }
    int m = 2*n;
    int actual = m * (m+1) / 2;
    int sum = accumulate(v.begin(), v.end(), 0.);
    v[0] = actual - sum;

    for(int i: v) {
        cout << i << " ";
    }

    cout << endl;

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