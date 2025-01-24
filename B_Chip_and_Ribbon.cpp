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
    int n; cin>>n;
    vi v(n),h(n+1,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(n==1)
    {
        cout<<v[0]-1<<endl;
        return;
    }
    vl res;res.pb(1);
    for(int i=0;i<n;i++)
    {
        if(v[i]!=res[res.size()-1])
        res.pb(v[i]);
    }
    ll heda=0;
    for(int i=0;i<res.size()-1;i++)
    {
        if(res[i]<res[i+1])
        heda+=res[i+1]-res[i];
    }
    cout<<heda<<endl;
    //heda korte contest kori . contest re cdi
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}