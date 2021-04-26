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
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x = x2;
    int y = y2;
    int dx = x2-x1;
    int dy = y2-y1;
    rep(i,2){
        swap(dx,dy);
        dx = -dx;
        x += dx;
        y += dy;
        cout << x << " " << y << endl;
    }
    return 0;
}