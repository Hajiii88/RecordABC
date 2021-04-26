#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i <= (n); ++i)
#define df(x) int x = in();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
using ll = long long;
using p = pair<int, int>;

int main()
{
    string s;
    cin >> s;
    vector<string> divide(4);
    divide = {"dream", "dreamer", "erase", "eraser"};

    reverse(s.begin(), s.end());
    rep(i,4) reverse(divide.at(i).begin(), divide.at(i).end());

    bool ok = true;
    for (int i = 0; i < s.size();)
    {
        bool ok2 = false;
        rep(j, 4)
        {
            string d = divide.at(j);
            if (s.substr(i, d.size()) == d)
            {
                ok2 = true;
                i += d.size();
            }
        }
        if (!ok2)
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "YES" ;
    else
        cout << "NO" ;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

//Greedyアルゴリズム
//"dream", "dreamer", "erase", "eraser"を空文字列Tの後ろに付け加える操作をして文字列Sを作れるか？
//文字列Sを切って判断するにしても"dream"で切っていいのか"dreamer"まで読み進めてから切るべきなのか判断が難しい
//後ろから呼んで判定 以下の4つのうちどれかと一致すればそこで区切れる
//"maerd", "remaerd", "esare", "resare"

int main()
{
    string S;
    cin >> S;
    vector<string> divide(4);
    divide = {"dream", "dreamer", "erase", "eraser"};

    //後ろから解く代わりに、すべての文字列を"反転"させる
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; i++)
        reverse(divide.at(i).begin(), divide.at(i).end());

    bool can = true;
    for (int i = 0; i < S.size();)
    {
        bool can2 = false;
        for (int j = 0; j < 4; j++)
        {
            string d = divide.at(j);
            if (S.substr(i, d.size()) == d)
            { //文字列Sのi番目から(divide.at(j)の文字数)個分の文字列がdivideの要素と合っていたら
                can2 = true;
                i += d.size(); //あったらiをdの文字数個分進める
            }
        }
        if (!can2)
        { //divideの文字列で切れなかったら
            can = false;
            break;
        }
    }

    if (can)
        cout << "YES";
    else
        cout << "NO";
}