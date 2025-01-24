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
#define test  \
    int t;    \
    cin >> t; \
    for (int i = 0; i < t; i++)
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
    string s;
    cin >> s;
    if(s.find("0")==string::npos)
    {
        cout<<s.size()*1ll*s.size()<<endl;
        return;
    }
    if (s.find("1") == string::npos)
    {
        cout << 0 << endl;
        return;
    }
    if (s.size() == 1)
    {
        if (s[0] == '1')
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        return;
    }
    ll cnt = 0, c = 0;
    s+=s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            c++;
             cnt = max(cnt, c);
        }
        else
        {
            c = 0;
        }
    }
    ll ans=0;
    ll heda=((cnt+1)/2);
    for(ll i=1;i<=heda;i++)
    {
        ans=max(ans,(cnt*i));
        //cout<<cnt*i<<" ";
        cnt--;
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}