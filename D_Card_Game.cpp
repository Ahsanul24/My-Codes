// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test  \
    int t;    \
    cin >> t; \
    for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void solve()
{
    int n;
    cin >> n;
    char c;
    cin >> c;
    map<char, vector<int>> m, trum;
    for (int i = 1; i <= 2 * n; i++)
    {
        int x;
        char ch;
        cin >> x >> ch;
        if (ch == c)
        {
            trum[ch].pb(x);
        }
        else
        {
            m[ch].pb(x);
        }
    }
    map<char, vi>::iterator mun;
    for (mun = m.begin(); mun != m.end(); mun++)
    {
        sort(mun->second.begin(), mun->second.end());
    }
    for (mun = trum.begin(); mun != trum.end(); mun++)
    {
        sort(mun->second.begin(), mun->second.end());
    }
    set<pair<string, string>> res;
    // this is for trum
     string a = "", b = "";
    for (auto it : m)
    {
        auto v = it.s;
        char ch = it.f;
        if (v.size() == 1)
        {
            a += to_string(v[0]);
            a += ch;
            for (auto x : trum)
            {
                auto vvv = x.s;
                if (vvv.size() > 0)
                {
                    b += to_string(trum[c].back());
                    b += c;
                    trum[c].pop_back();
                }
            }
            if (a.size() > 0 and b.size() > 0)
            {
                res.insert({a, b});
            }
            m[ch].pop_back();
        }
        b = "";
        a = "";
    }
    a = "", b = "";
    bool chcek = true;
    for (auto it : m)
    {
        char muni = it.f;
        auto vec = it.s;
        if (vec.size() == 1)
        {
            continue;
        }
        if (vec.size() >= 2)
        {
            for (;;)
            {
                a += to_string(m[muni].back());
                if (m[muni].size())
                    m[muni].pop_back();
                a += muni;
                b += to_string(m[muni].back());
                if (m[muni].size())
                    m[muni].pop_back();
                b += muni;
                res.insert({b, a});
                a = "";
                b = "";
                if (m[muni].size() <=1)
                {
                    break;
                }
            }
        }
    }
    if (res.size() * 2 != 2 * n)
    {
        for (auto xx : trum)
        {
            char cha=xx.f;
            auto xv = xx.s;
            if (xv.size() > 0)
            {
                for (auto it : m)
                {
                    char cool = it.f;
                    auto vec = it.s;
                    if (vec.size() > 0)
                    {
                        a += to_string(m[cool].back());
                        a += cool;
                        m[cool].pop_back();
                        if (trum[c].size() > 0)
                        {
                            b += to_string(trum[c].back());
                            b += c;
                            trum[c].pop_back();
                        }
                        res.insert({a, b});
                        a="";
                        b="";
                    }
                }
            }
        }
    }

    for (auto it : trum)
    {
        char let = it.f;
        auto vec = it.s;
        while (trum[c].size() >0)
        {
            b += to_string(trum[c].back());
            b += let;
            trum[let].pop_back();
            a += to_string(trum[c].back());
            trum[c].pop_back();
            a += let;
            res.insert({a, b});
            a = "";
            b = "";
        }
    }

    // for (auto it : trum)
    // {
    //     char cc = it.f;
    //     auto v = it.s;
    //     cout << cc << " ";
    //     for (auto ii : v)
    //         cout << ii << " ";
    //     cout << endl;
    // }
    // cout << endl;
    // cout << endl;
    if (res.size() * 2 != 2 * n)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    for (auto it : res)
        cout << it.f << " " << it.s << endl;
    //cout << endl;
}
int main()
{
    Ahsanul;
    test
    solve();
    // ar koto jora tali dibi ovi???????????????????????????????????
}
