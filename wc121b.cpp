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
    int n,m,c;
    cin >> n >> m >>c;
    vector<int> b(m);
    rep(i,n) cin >> b.at(i);
    vector<vector<int>> a(n,vector<int>(m));
    rep(i,n){
        rep(j,m){
            cin >> a.at(i).at(j);
        }
    }
    vector<int> sum(n);
    int k = 0;
    rep(i,n){
        rep(j,m){
            sum.at(k) += a.at(i).at(j) * b.at(j);
            if(j==m-1){
                sum.at(k) += c; 
                k++;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if(sum.at(i)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}