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
    vi v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vi h(n+1,0);
    for(int i=1;i<=n;i++)
    {
        h[i]=h[i-1]+v[i];
    }
    int m; cin>>m;
    w(m)
    {
        int x; cin>>x;
        int ub=n;
        int lb=1;
        int mid;
        while(ub>lb)
        {
            mid=(ub+lb)/2;
            if(h[mid]>=x)
            {
                ub=mid;
            }
            else
            {
                lb=mid+1;
            }
        }
        if(h[lb]>=x)
        {
            cout<<lb<<endl;
        }
        else
        {
            cout<<ub<<endl;
        }
    }
}
int main()
{
    Ahsanul;
    solve();
}