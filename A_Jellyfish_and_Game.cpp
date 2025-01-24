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
    int n,m,k; cin>>n>>m>>k;
    vi j(n),g(m);
    for(int i=0;i<n;i++) cin>>j[i];
    for(int i=0;i<m;i++) cin>>g[i];
    srt(j);
    rsrt(g);
    if((j[0]<g[0]))
    {
        swap(j[0],g[0]);
    }
    if((k%2==0))
    {
        rsrt(j);rsrt(g);
        if(j[0]>g[m-1])
        {
            swap(j[0],g[m-1]);
        }
    }
    ll mun=0;
    for(int i=0;i<n;i++)
    {
        mun+=j[i];
    }
    cout<<mun<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}