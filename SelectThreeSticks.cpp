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
    int n;
    cin>>n;
    vl v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    srt(v);
    for(int i=1;i<=n-2;i++)
    {
        if(v[i-1]==v[i] && v[i]==v[i+1])
        {
            cout<<"0"<<endl;
            return;
        }
    }
    ll  a=INT_MAX;
    for(int i=1;i<=n-2;i++)
    {
        if(v[i-1]==v[i])
        {
            a=min(a,abs(v[i]-v[i+1]));
        }
        else if(v[i]==v[i+1])
        {
            a=min(a,abs(v[i]-v[i-1]));
        }
        else
        {
            a=min(a,(abs(v[i]-v[i-1])+abs(v[i]-v[i+1])));
        }
    }
    cout<<a<<endl;
}
int main()
{
    int t; cin>>t;
    w (t)
    {
        solve();
    }
    
}