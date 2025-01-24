// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define w(x) while (x--)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define PI 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void s()
{
    int n;
    cin >> n;
    vi r;
    int i = 2;
    while (r.size() != n)
    {
        if (i != 6 && i != 8)
        {
            r.pb(i);
        }
        i++;
    }
    for (auto it : r)
    {
        cout << it << " ";
    }
    cout << endl;
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