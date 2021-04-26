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
    string s; cin >> s;
    //スタートが1か0か
    int res = 1<<29; //シフト演算か。1を29個左にずらしている。
    for(int start = 0; start <=1;++start){
        //それぞれの数値でスタート
        int val = start;
        int count  = 0;
        for(int i = 0; i< s.size();i++){
            //目指すものと異なる部分をカウント
            if(s[i]-'0' != val) ++count;
            //入れ替え
            val = 1-val;
        }
        res = min(res,count);
    }
    cout << res << endl;
    return 0;
}