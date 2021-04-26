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
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> num(n, k - q); //vector<型> 配列名(要素数, 初期値);
    rep(i,q){ //例えばvector<int> vec(3, 5);と書いた場合、配列変数vecは{5, 5, 5}で初期化されます
        int a;
        cin >> a;
        a--;
        num[a]++;
    }
    rep(i,n){
        if(num[i]<=0) cout << "No" <<endl;
        else cout << "Yes" << endl;
    }
    return 0;
}

//2nd 
//反対側とか補集合とか余事象を考えれば溶ける問題。
int main(){
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> num(n,0);
    rep(i,q){
        int a; 
        cin >> a; a--;
        num[a]++;
    }
    rep(i,n){
        if(k-(q-num[i]) <= 0){
            cout << "No" << endl;
        }
        else cout << "Yes" << endl;
    }

    return 0;
}