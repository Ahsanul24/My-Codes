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
const int N=2*1e5+10;
int a[N];
int tree[4*N];
int sz;
void build(int node = 0, int beg = 0, int end = sz)
{
    if (beg == end)
    {
        tree[node] = a[beg];
        return;
    }
    int left = node * 2 + 1;
    int right = left + 1;
    int mid = beg + (end - beg) / 2;
    build(left, beg, mid);
    build(right, mid + 1, end);
    tree[node] = tree[left] + tree[right];
}
void update(int idx,int node=0,int beg=0,int end=sz)
{
    if(idx>end or idx<beg)
    {
        return;
    }
    if(beg==end)
    {
        tree[node]^=1;
        return;
    }
    int left = node * 2 + 1;
    int right = left + 1;
    int mid = beg + (end - beg) / 2;
    update(idx,left,beg,mid);
    update(idx,right,mid+1,end);
    tree[node]=tree[left]+tree[right];
}
int query(int val,int node=0,int beg=0,int end=sz)
{
    if(tree[node]==1 and val==0 and beg==end)
    {
        return beg;
    }
    int left = node * 2 + 1;
    int right = left + 1;
    int mid = beg + (end - beg) / 2;
    if(tree[left]<val+1)
    {
       return query(val-tree[left],right,mid+1,end);
    }
    else
    {
       return query(val,left,beg,mid);
    }
}
void solve()
{
    int n,q; cin>>n>>q;
    sz=n-1;
    loop cin>>a[i];
    build();
    w(q)
    {
        int t; cin>>t;
        if(t==1)
        {
            int x; cin>>x;
            update(x);
        }
        else
        {
            int x; cin>>x;
            cout<<query(x)<<endl;
        }
    }
    //for(int i=0;i<13;i++)cout<<tree[i]<<" ";
}
int main()
{
    Ahsanul;
    //test
    solve();
}