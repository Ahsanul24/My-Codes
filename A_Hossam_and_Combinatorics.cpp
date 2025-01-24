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
const int N=1e5+10;
void solve()
{
    int n; cin>>n;
    vi v(n),h(N,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        h[v[i]]++;
    }
    ll m=*max_element(v.begin(),v.end());
    ll nn=*min_element(v.begin(),v.end());
    ll mc=h[m],nc=h[nn];
    if(m==nn)
    {
        cout<<mc*1ll*(mc*1ll-1)<<endl;
    }
    else
    {
        cout<<(2*(mc*1ll*nc))<<endl;
    }
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}