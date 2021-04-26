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
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int res = 0,flag = 0;
    while(1){
        rep(i,n){
            if(a[i]%2 == 1) flag = 1;
            a[i] /= 2;
        }
        if(flag == 1) break;
        res++;
    }
    cout << res << endl;
    return 0;
}