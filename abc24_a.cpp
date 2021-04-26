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
    ll a,b,c,k;
    cin >> a >> b>> c >> k;
    if(k%2!=0) cout << b-a << endl; 
    else cout << a-b << endl;
    return 0;
}