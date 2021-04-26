#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i <= (n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int main(){
    int n;
    cin >> n;
    vector<int> b(n-1);
    rep(i,n-1) cin >> b[i];
    ll res = b[0] + b.back();
    for(int i = 0; i+1<b.size();i++){
        res += min(b[i],b[i+1]);
    }
    cout << res << endl;
    return  0;
}