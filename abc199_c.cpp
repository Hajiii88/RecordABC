/*
　　　　　／＞　 フ
　　　　　| 　_　 _|
　 　　　／`ミ _x 彡
　　 　 /　　　 　 |
　　　 /　  ヽ　　 ?
　／￣|　　 |　|　|
　| (￣ヽ＿_ヽ_)_)
　＼二つ
 */

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
    int n,q;
    string s;
    cin >> n >> s >> q;
    
    int t,a,b,l=0;
    while(q--){
        cin >> t >> a >> b;
        if(t==1){
            a = (a+l-1)%(n<<1);
            b = (b+l-1)%(n<<1);
            swap(s[a],s[b]);
        }
        else l= n-l;
    }
    n<<=1;
    rep(i,n) cout << s[(i+l)%n];
    cout << endl;
    return 0;
    return 0;
}

