#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int main(){
    string n;
    cin >> n;
    string d;
    for(char c:n){
        if(c == '.') break;
        else d += c;
    }
    cout << d << endl;
    return 0;
}