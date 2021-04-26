#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (int)(n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int f(ll a, ll b){
    string sa,sb;
    sa = to_string(a);
    sb = to_string(b);
    int ret = max(sa.size(),sb.size());
    return ret;
}

int main(){
    ll N;
    cin >> N;
    const int INF = 1001001001;
    int ans = INF;
    for(ll a = 1; a*a <= N; a++){
        if(N%a == 0){
            ll b = N/a;
            ans = min(ans,f(a,b));
        }
    }
    cout << ans << endl;
    return 0;
}