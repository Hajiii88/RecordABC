#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int main(){
    int h,w,x,y;
    cin >> h >>w >> x >> y;
    string s;
    vector<vector<int>> map;
    rep(i,h){
        rep(j,w){
            if(s.at(j) == '#') map[i][j] = 1;
            else map[i][j] = 0;
        }
    }
    for(int i = x;i<w i++){
        if()
    }
    cout << ans-1 << endl;
    return 0;
}

int dx[4]={0,1,0,-1},dy[4]={-1,0,1,0};

int main(){
    int h, w, x, y;
    string s[101];
    cin >> h >> w >> x >> y;
    x--;y--;
    rep(i,0,h) cin >> s[i];
    int ans = 1;
    rep(d,0,4){
        int x1=x,y1=y;
        while(1){
            x1 += dx[d];
            y1 += dy[d];
            if (x1 < 0 || y1 < 0 || w <= x1|| h <= y1) break;
            if (s[y1][x1] == '#') break;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}