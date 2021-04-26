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
    string s;
    cin >> s;
    for(char c='a'; c <= 'z';c++){
        bool found = false;
        for(int i = 0;i<s.length(); i++){
            if(s[i] == c) found = true;
        }
        if(!found){
            cout << c << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}