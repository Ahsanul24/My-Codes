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
#define N 100001
int tree[3*N];
void build(vector<int> v,int node,int beg,int end)
{
    if(beg==end)
    {
        tree[node]=v[beg];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(beg+end)/2;
    build(v,left,beg,mid);
    build(v,right,mid+1,end);
    tree[node]=tree[left]+tree[right];//check here
}
int query(int node,int i,int j,int beg,int end)
{
    if(i>end or j<beg)
    {
        return 0;
    }
    if(i<=beg and j>=end)
    {
        return tree[node];
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(beg+end)/2;
    int p=query(left,i,j,beg,mid);
    int q=query(right,i,j,mid+1,end);
    return p+q;//check here
}
void update(int idx,int val,int beg,int end,int node)
{
    if(beg>=idx and end<=idx)
    {
        tree[node]=val;//check
        return;
    }
    if(idx>end or idx<beg)
    {
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(beg+end)/2;
    update(idx,val,beg,mid,left);
    update(idx,val,mid+1,end,right);
    tree[node]=tree[left]+tree[right];//check here
}
void solve()
{
    int n; cin>>n;
    vi v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];
    build(v,1,1,n);
    cout<<query(1,2,7,1,n)<<endl;
    update(7,10,1,n,1);
    cout << query(1, 2, 7, 1, n) << endl;
}
int main()
{
    Ahsanul;
    //test
    solve();
}