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
    cin >> a >> b;
    int res = 0;
    for(int i = a; i<=b; i++){
        string s = to_string(i);
        if(s[0]==s[4] && s[1]==s[3]) res++;
    }
    cout << res << endl;
    return 0;
}