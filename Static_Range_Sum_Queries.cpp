// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
const int N = 2*1e5+10;
int a[N];
int sz;
ll tree[4*N]={};
void build(int node=1,int beg=1,int end=sz)
{
    if(end<beg)
    {
        return;
    }
    if(beg==end)
    {
        tree[node]=a[beg];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=beg+(end-beg)/2;
    build(left,beg,mid);
    build(right,mid+1,end);
    tree[node]=tree[left]+tree[right];
}
ll query(int i,int j,int node=1,int beg=1,int end=sz)
{
    if(end<beg)return 0;
    if(i>end or j<beg)
    {
        return 0;
    }
    if(beg>=i and j>=end)
    {
        return tree[node];
    }
    int left=(node*2);
    int right=node*2+1;
    int mid = beg + (end - beg) / 2;
    ll p=query(i,j,left,beg,mid);
    ll q=query(i,j,right,mid+1,end);
    return p+q;
}
void solve()
{
    int n,q; cin>>n>>q;
    sz=n;
    for(int i=1;i<=n;i++)cin>>a[i];
    build();
    w(q)
    {
        int x,y; cin>>x>>y;
        cout<<query(x,y)<<endl;
    }
}
int main()
{
    Ahsanul;
    //test
    solve();
}