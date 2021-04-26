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
    vector<int> p(n,0);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        p[a-1]++;
        p[b-1]++;
    }
    rep(i,n){
        cout << p[i] <<endl;
    }
    return 0;
}