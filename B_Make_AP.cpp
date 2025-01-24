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
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void s()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + c) % (2 * b) == 0)
        cout << "YES" << endl;
    else if ((2 * b) - c > 0 && (2 * b - c) % a == 0)
        cout << "YES" << endl;
    else if ((2 * b) - a > 0 && (2 * b - a) % c == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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