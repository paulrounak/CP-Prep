#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b>> c;

    if(b-a > c-b){
        cout << "NO" << endl;
        return;
    }

    if((a+b+c) % 3 == 0) {
        cout << "YES"<< endl;
        return;
    }
    cout << "NO" << endl;
}

int main () {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}