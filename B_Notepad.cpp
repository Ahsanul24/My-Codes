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
    string s;
    cin >> s;
    map<char, set<char>> m;
    m[s[0]].insert(s[1]);
    for (int i = 3; i < n; i++)
    {
        if (m[s[i - 1]].find(s[i]) != m[s[i - 1]].end())
        {
            cout << "YES" << endl;
            return;
        }
        m[s[i - 2]].insert(s[i - 1]);
    }
    cout << "NO" << endl;
}
int main()
{
    int test;
    cin >> test;
    w(test)
        s();
}