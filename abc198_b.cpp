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
    int n;
    cin >> n;
    if(n==0){
        cout << "Yes" <<endl;
        return 0;
    }
    while(n%10==0) n/=10;
    if(isPalindrome(to_string(n))){
        cout << "Yes" << endl;
    } else{
        cout << "No" <<endl;
    }
    return 0;
}