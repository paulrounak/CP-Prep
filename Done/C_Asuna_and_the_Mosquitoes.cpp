#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> e, o;

    ll temp;
    ll sum = 0;

    for(int i = 0; i<n; i++) {
        cin >> temp;
        if(temp % 2) o.push_back(temp);
        else e.push_back(temp);
        sum += temp;
    }

    if(e.empty()) {
        cout << *max_element(o.begin(), o.end()) << endl;
        return;
    }
 
    if(o.empty()) {
        cout << *max_element(e.begin(), e.end()) << endl;
        return;
    }

    cout << sum - o.size() + 1 << endl;
}

int main () {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}