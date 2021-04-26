#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i <= (n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int f(int x){
    int r = 0;
    while(x>0){
        r += x%10;
        x /= 10;
    }
    return r;
}

int main(){
    int n,a,b;
    cin >>n >>  a >> b;
    int res = 0;
    for(int i=1;i<=n; i++){
        int rr = f(i);
        if(a<=rr &&  b>=rr){
            res += i;
        }
    }
    cout << res << endl;
    return  0;
}