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
    int n = 3;
    vi v(n);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    int temp = *min_element(v.begin(), v.end());
    bool check1 = true;
    for (int i = 0; i < 3; i++)
    {
        if (v[i] % temp != 0)
        {
            check1 = false;
            break;
        }
    }
    int count = 3;
    bool a = false, b = false, c = false;
    while (v[0] != temp && count != 0)
    {
        v[0] -= temp;
        count--;
    }
    while (v[1] != temp && count != 0)
    {
        v[1] -= temp;
        count--;
    }
    while (v[2] != temp && count != 0)
    {
        v[2] -= temp;
        count--;
    }
    if (!check1)
    {
        cout << "NO" << endl;
        return;
    }
    if (v[0] == v[1] && v[1] == v[2])
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    int test;
    cin >> test;
    w(test) s();
}