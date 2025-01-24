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
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void s()
{
    string s;
    cin >> s;
    int o = 0, z = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            o++;
        }
        else
        {
            z++;
        }
    }
    if (o == 0 || z == 0)
    {
        cout << "NET" << endl;
        return;
    }
    int k = min(o, z);
    int temp = (k & 1);
    (temp == 0) ? cout << "NET" << endl : cout << "DA" << endl;
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