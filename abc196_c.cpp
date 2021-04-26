#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

ll f(ll x){
    string s = to_string(x);
    return stoll(s+s);
}

int main(){
    int n;
    cin >> n;
    ll x  = 1;
    while(f(x) <= n) ++x;
    ll ans = x-1;
    cout << ans << endl;
    return 0;
}