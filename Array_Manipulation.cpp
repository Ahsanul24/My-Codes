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
const int N=1e7+10;
vector<ll>v(N);
void solve()
{
    int n,k; cin>>n>>k;
    // vl h(n+1);
    w(k)
    {
        int a,b,d; cin>>a>>b>>d;
        v[a]+=d;
        v[b+1]-=d;
    }
    for(int i=1;i<=n;i++)
    {
        v[i]=v[i-1]+v[i];
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
}
int main()
{
    Ahsanul;
    solve();
}