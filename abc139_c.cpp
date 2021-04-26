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
    int res = 0, m = 0;
    for(int i = 0; i<n-1; i++){
        if(p[i]>=p[i+1]) m++;
        else {
            res = max(m,res);
            m = 0;
        }
    }
    res = max(m,res);
    cout << res << endl;
    return 0;
}