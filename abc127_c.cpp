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
    int n,m;
    cin >> n >> m;
    int left = 1,right = n;
    rep(i,m){
        int l,r;
        cin >> l >> r;
        left = max(left,l);
        right = min(right,r);
    }
    cout << max(right-left+1,0) << endl;
    return 0;
}