// https://codeforces.com/problemset/problem/2106/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    int n, x; 
    cin >> n >> x;

    if(x>=n) {
        for(int i = 0; i<n; i++) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    else {
        for(int i = 0; i<n; i++) {
            if(i != x) {
                cout << i << " ";
            }
        }
        cout << x << " " << endl;
        return;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}