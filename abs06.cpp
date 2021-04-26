#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i <= (n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int main(){
    int n,a,b;
    cin >> n >> a >> b;

    int res = 0;
    rep(i,n){
        int wa = 0, num = i;
        do{
            wa += num%10;
            num /= 10;
        }while(num != 0);
            if(wa >a && wa <= b) res += i;
    }
    cout << res << endl;
    return 0;
}