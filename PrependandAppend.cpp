// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void solve()
{
    ll n; cin>>n;
    string s; cin>>s;
    ll c=0;
    for(ll i=0;i<n/2;i++)
    {
        if ((s[i] == '0' && s[n - i - 1] == '1') || (s[i] == '1' && s[n - i - 1] == '0'))
        {
            c++;
        }
        else
        {
            break;
        }
    }
    cout<<n-(c*2)<<endl;
}
int main()
{
    ll t; cin>>t;
    w(t)
    {
        solve();
    }
}