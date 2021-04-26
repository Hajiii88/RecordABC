#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int maxtime(int x){
    return (x +9)/10*10;
}
int remtime(int x){
    return maxtime(x) - x;
}

int main(){
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int sum = maxtime(a)+ maxtime(b)+ maxtime(c)+ maxtime(d)+ maxtime(e);
    sum -= max({remtime(a),remtime(b),remtime(c),remtime(d),remtime(e)});
    cout << sum << endl;
    return 0;
}