//2回目データ取り直し

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
    int a,b;
    cin >> a >>b;
    int c=a-1,d=b-1;
    if(d%c==0) cout << d/c <<endl;
    else cout << d/c+1 <<endl;
    return 0;
}