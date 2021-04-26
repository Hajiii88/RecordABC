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
    int a,b;
    string s;
    cin >> a >> b>> s;
    int len = s.size();
    bool ok = false;
    for(int i = 0;i<len; i++){
        if(s[a] == '-') {
            ok = ture;
        }
        else {
            cout << "No" << endl;
            return 0;
        }
    }
    if(ok) {
        for(int i = 0;i<a-1;i++)
    }
    cout << "No" << endl;
    return 0;
}

int main(){
    int a, b;
    string s;
    cin >> a >> b >> s;
    if(s[a] != '-') return cout <<"No" << endl,0;
    for(int i = 0; i<a+b; i++){
        if(i==a) continue;
        else if(s[i]<'0' or  s[i]>'9') return cout << "No" << endl,0;
    }
    cout << "Yes" << endl;
    return 0;
}