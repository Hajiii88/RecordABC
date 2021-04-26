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
    string a,b;
    cin >> a >> b;

    if(a<b || a.size()<b.size()){
        cout << "LESS" << endl;
        return 0;
    }
    else if(a>b || a.size()>b.size()){
        cout << "GREATER" << endl;
        return 0;
    }
    else if(a.size()==b.size()) cout << "EQUAL" << endl;
    return  0;
}