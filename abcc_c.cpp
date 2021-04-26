#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int f(int x){
    for(int i= 1;x<=i*i;i++){
        if(x==i*i){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n,d;
    cin >> n >> d;
    vector<vector<int>> p(n,vector<int>(d,0));
    rep(i,n){
        rep(j,d){
            cin >> p[i][j];
        }
    }
    int sum = 0,res = 0;
    rep(i,n){
        rep(j,d){
            sum = (p[i][j]-p[i+1][j])*(p[i][j]-p[i+1][j]) + (p[i][j+1]-p[i+1][j+1])*(p[i][j+1]-p[i+1][j+1]);
            if(f(sum))res++;
        }
    }
    cout << res << endl;
    return 0;
}