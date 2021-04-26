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
    cin >> n;
    int mini = 1001001001;
    int res = 0;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    rep(i,n){
        if(mini>p[i]){
            mini = min(mini,p[i]);
            res++;
        }
    }
    cout << res << endl;
    return 0;
}

//2nd

int main(){
    int n;
    cin >> n;
    int res = 0,num = n+1;
    for(int i=0;i<n;i++){
        int a;
        cin >>a;
        num = min(a,num);
        if(num==a) res++;
    }
    cout << res << endl;
    return 0;
}