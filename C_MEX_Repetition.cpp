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
    ll n,k; cin>>n>>k;
    vi v(n);
    ll sum=0;
    ll asol=(n*(n+1))/2;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ll mising=asol-sum;
    if(n==1)
    {
        if(k&1)
        {
            cout<<abs(1-v[0])<<endl;
        }
        else
        {
            cout<<v[0]<<endl;
        }
        return;
    }
    k%=(n+1);
    if(k==0)
    {
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=n-k+1;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<mising<<" ";
    for(int i=0;i<n-k;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}