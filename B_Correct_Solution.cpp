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
    string kabil, habu;
    cin >> kabil >> habu;
    int a = stoi(kabil);
    int b = stoi(habu);
    if (a == 0 && b == 0 && kabil.length() == habu.length())
    {
        cout << "OK" << endl;
        return;
    }
    if (habu[0] == '0' || (a == 0 && b != 0))
    {
        cout << "WRONG_ANSWER" << endl;
        return;
    }
    vi v;
    int count = 0;
    while (a != 0)
    {
        int temp = a % 10;
        if (temp == 0)
        {
            count++;
        }
        else

            v.pb(temp);
        a /= 10;
    }
    srt(v);
    string r = "";
    r += v[0] + '0';
    for (int i = 0; i < count; i++)
    {
        r += '0';
    }
    for (int i = 1; i < v.size(); i++)
    {
        r += v[i] + '0';
    }
    if (b == stoi(r))
        cout << "OK" << endl;
    else
        cout << "WRONG_ANSWER" << endl;
}
int main()
{
    s();
}