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
    string s;
    cin >> s;
    vector<int> v;
    int len = s.size();
    for(int i = 0;i<=len -3;i++){
        string now = s.substr(i,3);
        int n = stoi(now);
        v.push_back(abs(n-753));
    }
    cout << *min_element(v.begin(),v.end()) << endl;
    return 0;
}