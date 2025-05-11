// https://codeforces.com/problemset/problem/2106/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    int n;
    cin >> n;
    string a;
    cin >> a;

    ll sum = 0;

    int no = 0;
    for(auto i: a) {
        if (i == '1') no++;
    }

    for(int i: a) {
        if(i == '1') {
            sum += no-1;
        }
        else sum += no+1;
    }

    cout << sum << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}