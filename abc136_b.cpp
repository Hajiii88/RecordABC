#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (int)(n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    rep(i,n){
        if((i<=n &&i<10) || (i<=n && (100 <= i && 999 >= i)) || (i<=n && (10000 <= i && 99999 >= i))){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

//公式解答

bool f(int x){
    int keta = 0;
    while(x){
        keta ++;
        x /= 10;
    }
    return keta%2 == 1;
}

int main(){
    int n;
    cin >>n;
    int ans = 0;
    for(int i = 1; i<=n; i++){
        if(f(i)) ans++;
    }
    cout << ans << endl;
    return 0;
}