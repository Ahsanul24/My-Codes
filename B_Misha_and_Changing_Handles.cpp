// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
void s()
{
    int n;
    cin >> n;
    map<string, string> m;
    loop
    {
        string s, x;
        cin >> s >> x;
        if (m.find(s) == m.end())
        {
            m[x] = s;
        }
        else
        {
            m[x] = m[s];
            m.erase(s);
        }
    }
    cout << m.size() << endl;
    for (auto &it : m)
    {
        cout << it.S << " " << it.F << endl;
    }
}
int main()
{
    s();
}