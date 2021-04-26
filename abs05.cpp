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
    int a,b,c,x;
    cin >> a >> b >> c >> x;

    int res = 0;
    rep(i,a){
        rep(j,b){
            rep(k,c){
                if(x == 500*i + 100*j + 50*k) res++;
            }
        }
    }
    if(x > 500*a+100*b+50*c) res = 0;
    cout << res << endl;
    return 0;
}