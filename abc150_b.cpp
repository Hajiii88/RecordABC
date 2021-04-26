#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int res = 0;
    rep(i,n-2){
        if(s.substr(i,3) == "ABC"){
            res++;
        }
    }
    cout << res << endl;
    return 0;
}