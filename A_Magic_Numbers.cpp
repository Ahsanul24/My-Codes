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
#define w(x) while (x--)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void s()
{
    string s;
    cin >> s;
    bool c = true;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            i += 2;
            continue;
        }
        else if (s[i] == '1' && s[i + 1] == '4')
        {
            i += 1;
            continue;
        }
        else if (s[i] == '1')
        {
            continue;
        }

        else
        {
            c = false;
        }
    }

    if (c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    Ahsanul;
    s();
}