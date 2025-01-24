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
#define f first
#define s second
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
int cmp(pr a,pr b)
{
    return a.s<b.s;
}
void solve()
{
    int n; cin>>n;
    vector<pr>p;
    for(int i=0;i<n;i++)
    {
        int a,b; cin>>a>>b;
        p.pb({a,1});
        p.pb({b,-1});
    }
    sort(p.begin(),p.end());
    int sum=0,res=0;
    for(int i=0;i<p.size();i++)
    {
        sum+=p[i].s;
        if(sum>res)
        {
            res=sum;
        }
    }
    cout<<res<<endl;
}
int main()
{
    Ahsanul;
    solve();
}