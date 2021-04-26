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
    set<int> st;
    int x;
    rep(i,n){
        cin >> x;
        st.insert(x);
    }
    cout << st.size() << endl;
    return 0;
}