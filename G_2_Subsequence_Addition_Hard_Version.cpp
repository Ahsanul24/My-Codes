// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1e9+7
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
    vi v(n);
    loop cin>>v[i];
    srt(v);
    if(v[0]!=1)
    {
        cout<<"NO"<<endl;
        return;
    }
    ll sum=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]>sum)
        {
            cout<<"NO"<<endl;
            return;
        }
        sum+=v[i];
    }
    cout<<"YES"<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}