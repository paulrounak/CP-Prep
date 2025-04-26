// https://codeforces.com/problemset/problem/2106/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n, 0);
    vector<ll> b(n, 0);

    ll sum = -1;
    for(ll i = 0; i<n; i++) {
        cin >> a[i];
    }

    for(ll i = 0; i<n; i++) {
        cin >> b[i];
        if(b[i] != -1) sum = b[i]+a[i];
    }

    for(ll i = 0; i<n; i++) {
        if(b[i] == -1) continue;
        else {
            if(b[i] + a[i] != sum) {
                cout << 0 << endl;
                return;
            }
        }
    }

    if(sum!=-1) {
        for(ll i = 0; i<n; i++) {
            if(b[i] == -1) {
                if(sum - a[i] < 0 || sum - a[i] > k) {
                    cout << 0 << endl;
                    return;
                }
            }
        }
        cout << 1 << endl;
        return;
    }

    else {
        cout << k + *min_element(a.begin(), a.end()) - *max_element(a.begin(), a.end()) + 1 << endl;
        return;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}