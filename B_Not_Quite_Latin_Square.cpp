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
#define f first
#define s second
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
void solve()
{
    string a, b, c;
    cin >> a >> b >> c;
    bool A = false, B = false, C = false;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == 'A')
            A = true;
        else if (a[i] == 'B')
            B = true;
        else if (a[i] == 'C')
            C = true;
    }
    if (!A)
        cout << "A" << endl;
    else if (!B)
        cout << "B" << endl;
    else if (!C)
        cout << "C" << endl;
    bool AA = false, BB = false, CC = false;
    bool AAA = false, BBB = false, CCC = false;
    for (int i = 0; i < 3; i++)
    {
        if (b[i] == 'A')
            AA = true;
        else if (b[i] == 'B')
            BB = true;
        else if (b[i] == 'C')
            CC = true;
    }
    if (!AA)
        cout << "A" << endl;
    else if (!BB)
        cout << "B" << endl;
    else if (!CC)
        cout << "C" << endl;
    for (int i = 0; i < 3; i++)
    {
        if (c[i] == 'A')
            AAA = true;
        else if (c[i] == 'B')
            BBB = true;
        else if (c[i] == 'C')
            CCC = true;
    }
    if (!AAA)
        cout << "A" << endl;
    else if (!BBB)
        cout << "B" << endl;
    else if (!CCC)
        cout << "C" << endl;
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}