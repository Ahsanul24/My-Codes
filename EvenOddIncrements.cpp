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
    int n,q; cin>>n>>q;
    vl v(n);
    ll sum=0,evencount=0,oddcount=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
        sum+=v[i];
    }
    for(int i=0;i<q;i++)
    {
        ll x,y; cin>>x>>y;
        if(x==0)
        {
            sum+=(evencount*y);
            if(y%2!=0)
            {
                oddcount+=evencount;
                evencount=0;
            }
        }
        else
        {
            sum+=(oddcount*y);
            if(y%2!=0)
            {
                evencount+=oddcount;
                oddcount=0;
            }
        }
        cout<<sum<<endl;
    }
}
int main()
{
    Ahsanul;
    int test; cin>>test;
    w (test)
    {
        solve();
    }
    
}