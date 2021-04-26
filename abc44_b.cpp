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
    string w;
    cin >> w;
    rep(i,w.size()){
        if(count(w.begin(),w.end(),w[i])%2==1){
            cout << "No" << endl;
            return 0;
        } 
    }
    cout << "Yes" <<endl; 
    return 0;
}