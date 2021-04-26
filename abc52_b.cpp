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
    int n;
    string s;
    cin >> n >> s;
    int x = 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='I') x++;
        if(s[i]=='D') x--;
        ans = max(ans,x);
    }
    cout << ans << endl;
    return 0;
}