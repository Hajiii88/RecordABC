#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (int)(n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int cD(int x){
    int ans = 0;
    for(int i = 1; i<x=; i++){
        if(x%i == 0) ans++;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i =1; i<=n; i+=2){
        if(cD(i) == 8) cnt++;
    }
    cout << cnt << endl;
    return 0;
}