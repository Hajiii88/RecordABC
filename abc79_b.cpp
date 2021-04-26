#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

ll l(ll x){
    int cnt = 0;
    if(x==0) return 2;
    else if(x==1) return 1;
    else{
        ll l0 = 2,l1 = 1,ls=0;
        for(int i = 2; i<=x; i++){
            ls = l0 + l1;
            l0 = l1;
            l1 = ls;
        }
        return ls;
    }
}

int main(){
    ll n;
    cin >> n;
    cout << l(n) << endl;
    return 0;
}