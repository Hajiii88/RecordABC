#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = (m); i <= (n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int main(){
    ll a,b;
    cin >> a >> b;
    if(a>0) {
        cout << "Positive" << endl;
        return 0;
    }
    else if(a<=0 && b>=0){
        cout << "Zero" << endl;
        return 0;
    }
    else if((b-a)%2== 1){
        cout << "Positive" << endl;
        return 0;
    }
    else if((b-a)%2==0){
        cout << "Negative" << endl;
        return 0;
    }
    return 0;
}