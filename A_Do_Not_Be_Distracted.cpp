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
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool check = false;
    map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
        char c = s[i];
        while (s[i] == c)
        {
            i++;
        }
        i--;
        if (m[c] > 1)
            check = true;
    }
    if (check)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main()
{
    Ahsanul;
    int test;
    cin >> test;
    w(test)
    {
        s();
    }
}