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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> s = a;
    sort(s.rbegin(),s.rend());
    rep(i,n){
        int ans  = s[0];
        if(s[0]==a[i]) ans = s[1];
        cout << ans << endl;
    }
    return 0;
}

//2nd

int main(){
    int n;
    cin >> n;
    vector<ll> p(n);
    rep(i,n) cin >> p[i];
    auto q = p;
    sort(q.begin(),q.end(),greater<ll>());
    rep(i,n){
        if(p[i] != q[0]) cout << q[0] << endl;
        else cout << q[1] << endl;
    }
    return 0;
}