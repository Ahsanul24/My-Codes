// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void solve()
{
    int n; cin>>n;
    vi v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];
    int ek=0,dui=0,tin=0;
    for(int i=1;i<=n;i++)
    {
        if(v[i]==1)ek=i;
        if(v[i]==2)dui=i;
    }
    int idx = find(v.begin(), v.end(), n) - v.begin();
    if((idx>ek and idx<dui) or (idx>dui and idx<ek))
    {
        cout<<ek<<" "<<dui<<endl;
        return;
    }
    if(idx>dui and idx>ek and dui>ek)
    {
        cout<<dui<<" "<<idx<<endl;
        return;
    }
    if(idx>ek and idx>dui and ek>dui)
    {
        cout<<ek<<" "<<idx<<endl;
        return;
    }
    if(idx<ek and idx<dui and ek<dui)
    {
        cout<<idx<<" "<<ek<<endl;
        return;
    }
    cout<<idx<<" "<<dui<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}