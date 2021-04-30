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
    int a,b,k;
    cin >> a >> b >> k;
    for(int i =a;i<=min(b,a+k-1);i++) cout << i << endl;
    for(int i = max(b-k+1,a+k);i<=b;i++) cout << i << endl;
    return 0;
}