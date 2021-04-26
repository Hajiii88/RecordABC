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
    int a,b,k;
    cin >> a >> b >> k;

    int res = 0;
    for(int i = 100; i>=1; i--){
        if(a%i==0 && b%i==0){
            res++;
            if(res==k){
                cout<< i << endl;
                return 0;
            }
        }
    }
}