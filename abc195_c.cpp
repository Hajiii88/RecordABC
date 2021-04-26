#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;
int main(){
    ll n;
    cin >> n;
    ll x = 1000;
    ll ans = 0;
    while(n >= x){
        ans += n-x+1;
        x *= 1000;
    }
    cout << ans << endl;
    return 0;
}