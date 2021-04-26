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
    string s;
    cin >> s;
    int res = 0;
    rep(i,3){
        if(s[i] == '1') res++;
    }
    cout << res << endl;
    return 0;
}