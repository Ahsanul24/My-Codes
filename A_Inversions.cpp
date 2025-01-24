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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
const int N=1e5+10;
int tree[4*N];
void update(int idx,int node,int beg,int end)
{
    if(idx>end or idx<beg)
    {
        return;
    }
    if(beg==end)
    {
        tree[node]=1;
        return;
    }
    int left=(node<<1)+1;
    int right=left+1;
    int mid=beg+(end-beg)/2;
    update(idx,left,beg,mid);
    update(idx,right,mid+1,end);
    tree[node]=tree[left]+tree[right];
}
int query(int i,int j,int node,int beg,int end)
{
    if(j<beg or i>end)
    {
        return 0;
    }
    if(beg>=i and j>=end)
    {
        return tree[node];
    }
    int left = (node << 1) + 1;
    int right = left + 1;
    int mid = beg + (end - beg) / 2;
    int p=query(i,j,left,beg,mid);
    int q=query(i,j,right,mid+1,end);
    return p+q;
}
void solve()
{
    int n; cin>>n;
    vi v(n+1);
    loop cin>>v[i];
    for(int i=0;i<n;i++)
    {
        cout<<query(v[i],n,1,1,n)<< " ";
        update(v[i],1,1,n);
    }
}
int main()
{
    Ahsanul;
 //   test
    solve();
}