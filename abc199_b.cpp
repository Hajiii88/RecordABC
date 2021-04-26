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
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int res = 0;
    for(int i = a[n-1];i<=b[0];i++){
        res++;
    }
    cout << res << endl;
    return 0;
}