// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
#include <sstream>
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
void kocu(int n)
{
    vi x, y;
    ll sum = 0, summ = 0;
    while (n != 0)
    {
        int temp = n % 10;
        if (temp & 1 && sum <= summ)
        {
            x.pb((temp / 2) + 1);
            sum += (temp / 2) + 1;
            y.pb((temp / 2));
            summ += (temp / 2);
        }
        else if (temp & 1 && sum > summ)
        {
            y.pb((temp / 2) + 1);
            summ += (temp / 2) + 1;
            x.pb((temp / 2));
            sum += (temp / 2);
        }
        else
        {
            x.pb(temp / 2);
            sum += (temp / 2);
            y.pb(temp / 2);
            summ += temp / 2;
        }
        n /= 10;
    }
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    string ovi = "", f = "";
    for (auto it : x)
    {
        ovi += it + '0';
    }
    for (auto it : y)
    {
        f += it + '0';
    }
    stringstream h, k;
    h << ovi;
    k << f;
    int a = 0, b = 0;
    h >> a;
    k >> b;
    cout << a << " " << b << endl;
}
void s()
{
    int n;
    cin >> n;
    if (n & 1 && n % 20 != 19)
    {
        cout << (n / 2) << " " << (n / 2) + 1 << endl;
    }
    else if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << endl;
    }
    else
    {
        kocu(n);
    }
}
int main()
{
    int test;
    cin >> test;
    w(test) s();
}