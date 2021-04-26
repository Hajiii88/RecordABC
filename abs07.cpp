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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int g= 0,b= 0;

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    rep(i,n){
        if(i%2 == 0) g += a[i];
        else b += a[i];
    }
    cout << g-b << endl;
    return 0;
}