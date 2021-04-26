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
                if(i*500+j*100+k*50==x) res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}