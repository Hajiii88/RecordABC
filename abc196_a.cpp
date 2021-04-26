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
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    double res=0;

    for(int i =a; i<= b; i++){
        for(int j =c; j<=d; j++){
            double now = i-j;
            res = max(now,res);
        }
    }
    if(a == b && c == d) cout << a-c << endl;
    else cout << res << endl;
    return 0;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a == b && c == d) cout << a-c << endl;
    else  cout << b-c <<endl; 
    return 0;
}
