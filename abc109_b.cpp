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
    ll n;
    cin >> n;
    vector<string> w(n);
    rep(i,n) cin >> w[i];
    for(int i=1; i<n-1;i++){
        if(w[i-1][w[i-1].size()-1] != w[i][0]){
            cout << "No" << endl;
            return 0;
        }
        rep(j,i){
            if(w[j]==w[i]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}