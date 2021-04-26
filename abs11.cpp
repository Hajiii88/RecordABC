#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int main(){
    //cin.tie(nullptr);
    //ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int t[n],x[n],y[n];
    rep(i,n) cin >> t[i] >> x[i] >> y[i];

    bool ok = true;
    rep(i,n){
        int dt,dist;
        if(i == 0){
            dt = t[0];
            dist = abs(x[0]) + abs(y[0]);
        }
        else {
            dt = t[i] -t[i-1];
            dist = abs(x[i-1] - x[i])+abs(y[i-1] - y[i]);
        }
        if(dist > dt){
            ok = false;
            break;
        }else{
            if(dist%2 != dt%2){
                ok = false;
                break;
            }
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}