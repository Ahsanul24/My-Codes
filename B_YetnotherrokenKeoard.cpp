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
    string s;
    cin >> s;
    vi sl, cl;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            if (cl.size() != 0)
                cl.pop_back();
        }
        else if (s[i] == 'b')
        {
            if (sl.size() != 0)
            {
                sl.pop_back();
            }
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            sl.pb(i);
        }
        else
        {
            cl.pb(i);
        }
    }
    vi heda(s.size(),0);
    for(int i=0;i<sl.size();i++)
    {
        heda[sl[i]]++;
    }
    for(int i=0;i<cl.size();i++)
    {
        heda[cl[i]]++;
    }
    // else
    // {
    //     for (int i = 0; i <=heda.size(); i++)
    //     {
    //         if (heda[i+1]==1);
    //         {
    //             cout<<i+1;
    //         }
    //     }
    //     cout << endl;
    // }
    // for(auto it:heda)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it:cl)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    string res="";
    for(int i=0;i<heda.size();i++)
    {
        if(heda[i])
        {
            res+=s[i];
        }
    }
    if(res.size()!=0)cout<<res<<endl;
    else cout<<endl;
    // cout<<endl;
    // for(auto it:sl)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}