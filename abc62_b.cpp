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
    int h,w;
    cin >> h >> w;
    string s;
    for(int i=0;i<w+2;i++) cout<<'#';
    cout <<endl;
    for(int i=0;i<h;i++){
        cin >> s;
        cout<<'#'<<s<<'#'<<endl;
    }
    for(int i=0;i<w+2;i++) cout<<'#';
    cout <<endl;
    return 0;
}