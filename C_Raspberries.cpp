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
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void solve()
{
    int n, k;
    cin >> n >> k;
    vi h;
    int ans = INT_MAX;
    int c = 0, cc = 0;
    bool check=false;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(a%k!=0)
        {
            h.pb(k-(a%k));
        }
        if(a%k==0)
        {
            check=true;
        }
        if (a % 2 == 0)
            c++;
        if(a == 1)
            cc++;
    }
    if(check)
    {
        cout<<0<<endl;
        return;
    }
    if(k==4)
    {
        if(c==1)
        {
            cout<<1<<endl;
        }
        else if(c>1)
        {
            cout<<0<<endl;
        }
        else 
        {
            cout<<min(2,*min_element(h.begin(),h.end()))<<endl;
        }
        return;
    }
    if(k==4 and cc>=2)
    {
        cout<<2<<endl;
        return;
    }
    cout<<*min_element(h.begin(),h.end())<<endl;
}
int main()
{
    int test;
    cin >> test;
    w(test)
        solve();
}