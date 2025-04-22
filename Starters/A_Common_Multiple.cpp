// https://codeforces.com/problemset/problem/2103/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    int a;
    cin >> a;

    set<ll> s;

    for(int i = 0; i < a; i++){
        int n; 
        cin >> n; 
        s.insert(n);
    }

    cout << s.size() << endl; 
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}