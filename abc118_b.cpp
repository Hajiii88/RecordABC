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
    int n,m,a,b,c;
    cin >> n >> m;
    vector<int> p(m);
    rep(i,n){
        cin >> a;
        rep(j,a){
            cin >> b;
            p.at(b-1)++;
        }
    }
    rep(i,m){
        if(p.at(i) == n) c++;
    }
    cout << c << endl;
    return 0;
}