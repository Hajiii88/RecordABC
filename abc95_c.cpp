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
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    int res = x*a + y*b;
    rep(i,2*max(x,y)+1){
        int now = 2*c*i + max(x-i,0)*a + max(y-i,0)*b;
        res = min(res,now);
    }
    cout << res << endl;
    return 0;
}