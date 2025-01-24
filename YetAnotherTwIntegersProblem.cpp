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
void solve()
{
    int a, b;
    int one, two, three, four, five, six, seven, eigth, nine, ten;
    one = two = three = four = five = six = seven = eigth = nine = ten = 0;
    cin>>a>>b;
    int differ = abs(a - b);
    if (differ >= 10)
    {
        ten += differ / 10;
    }
    differ -= (ten * 10);
    if (differ >= 9)
    {
        nine += differ / 9;
    }
    differ -= (nine * 9);
    if (differ >= 8)
    {
        eigth += differ / 8;
    }
    differ -= (eigth * 8);
    if (differ >= 7)
    {
        seven += differ / 7;
    }
    differ -= (seven * 7);
    if (differ >= 6)
    {
        six += differ / 6;
    }
    differ -= (six * 6);
    if (differ >= 5)
    {
        five += differ / 5;
    }
    differ -= (five * 5);
    if (differ >= 4)
    {
        four += differ / 4;
    }
    differ -= (four * 4);
    if (differ >= 3)
    {
        three += differ / 3;
    }
    differ -= (three * 3);
    if (differ >= 2)
    {
        two += differ / 2;
    }
    differ -= (two * 2);
    one += differ / 1;
    printf("%d\n", one + two + three + four + five + six + seven + eigth + nine + ten);
}

int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}