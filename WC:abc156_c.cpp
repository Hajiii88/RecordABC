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
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    int res = 1001001001;
    rep(i,101){
        int num = 0;
        rep(j,n) num += (p[j]-i)*(p[j]-i);
        res = min(res,num);
    }
    cout << res << endl;
    return 0;
}