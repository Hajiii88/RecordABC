#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

ll f(ll x){
    if(x == 1) return 1;
    ll a = f(x/2);
    return a*2+1;
}

int main(){
    ll h;
    cin >> h;
    cout << f(h) << endl;
    return 0;
}

//2nd

ll rec(ll x){
    if(x==1) return 1;
    return rec(x/2)*2+1;
}
//よって計算量は O(logH) となる。
//その理由は「二分探索は毎回探索範囲が半減するから計算量が log になる」というのと一緒だ。

int main(){
    ll h; 
    cin >> h;
    cout << rec(h) << endl;
    return 0;
}