#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i <= (n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

bool isPalindrome(string s){
    string rs =s;
    reverse(rs.begin(),rs.end());
    return s==rs;
}

int main(){
    int n,l,k;
    cin >> n>> l>>k;
    vector<int> a(n);
    rep(i,n) cin << a[i];
    
    return 0;
}