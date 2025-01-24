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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            even.push_back(v[i]);
        }
        else
        {
            odd.push_back(v[i]);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    bool check1 = false, check2 = true, check3 = true;
    /*if((even.size()==n)||(odd.size()==n)|| odd[0]==1)
    {
        check1=true;
    }*/
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            continue;
        {
            if (odd.size() == 0 || odd[0] >= v[i])
            {
                check2 = false;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 != 0)
            continue;
        {
            if (odd.size() == 0 || odd[0] >= v[i])
            {
                check3 = false;
            }
        }
    }
    if (check2 || check3)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
}

int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}