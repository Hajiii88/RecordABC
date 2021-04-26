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
    int n,Y;
    cin >> n >> Y;

    bool ok = false;
    int x=-1,y=-1,z=-1;
    rep(i,n){
        rep(j,n){
            int k = n-i-j;
            if(i*10000+j*5000+k*1000 == Y && k>=0){
                x = i; y = j; z = k;
                ok =true;
                break;
            }
        }
        if(ok == true){
            break;
        }
    }
    cout << x << " " << y << " " << z << endl;
    return 0;
}