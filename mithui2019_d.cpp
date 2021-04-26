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
    int ans = 0;
    rep(i,1000){
        string t;
        int x = i;
        rep(j,3){
            t += '0' +x%10;
            x /=10;
        }
        int ti = 0;
        rep(j,n){
            if(s[j] == t[ti]){
                ++ti;
                if(ti == 3){
                    break;
                }
            }
        }
        if(ti == 3){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}