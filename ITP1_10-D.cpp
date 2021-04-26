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
    vector<int> x(n), y(n);
    rep(i,n) cin >> x[i];
    rep(i,n) cin >> y[i];

    double d1 = 0, d2 = 0,d3 = 0, d4 = 0;
    rep(i,n){
        d1 += abs(x[i] - y[i]);
    }
    rep(i,n){
        d2 += (abs(x[i] - y[i]) * abs(x[i] - y[i]));
        d2 = sqrt(d2);
    }
    rep(i,n){
        d3 += abs(x[i] - y[i]) * abs(x[i] - y[i]) * abs(x[i] - y[i]);
        d3 = pow(d3,1/3);
    }
    rep()
    return 0;
}