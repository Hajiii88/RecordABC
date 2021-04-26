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
    int n,m; cin >>  n >> m;
    vector<vector<int>> s(m);
    rep(i,m){
        int k; cin >> k;
        rep(j,k){
            int a; cin >> a; --a;
            s[i].push_back(a);
        }
    }
    vector<int> p(m);
    rep(i,m) cin >> p[i];
    ll ans = 0;
    for(int bit = 0;bit < (1<<n);++bit){
        bool ok = true;
        for(int i = 0; i<m;++i){
            int con = 0;
            for(auto v : s[i]){
                if(bit & (1<<v)) ++con;
            }
            if(con%2 != p[i]) ok = false;
        }
        if(ok) ++ans;
    }
    cout << ans << endl;
    return 0;
}