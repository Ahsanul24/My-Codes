// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcountll(a)
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
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
const int N=1e5+10;
int str[N];
int one[3*N];
int zero[3*N];
void buildz(int node,int beg,int end,vi &v)
{
    if(beg==end)
    {
        if(str[beg]==0)
        {
            zero[node]=v[beg];
        }
        else
        {
            zero[node]=0;
        }
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + end) / 2;
    buildz(left,beg,mid,v);
    buildz(right,mid+1,end,v);
    zero[node]=zero[left]^zero[right];
}
void buildo(int node, int beg, int end, vi &v)
{
    if (beg == end)
    {
        if (str[beg] == 1)
        {
            one[node] = v[beg];
        }
        else
        {
            one[node]=0;
        }
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + end) / 2;
    buildo(left, beg, mid, v);
    buildo(right, mid + 1, end, v);
    one[node] = one[left] ^ one[right];
}
void update(int idx,int idy,int node,int beg,int end,vector<bool>&cng)
{
    if (beg >= idx and end <= idy)
    {
        if(!cng[beg])
        {
            str[beg]^=1;
            cng[beg]=true;
        }
        if(!cng[end])
        {
            str[end]^=1;
            cng[end]=true;
        }
        return;
    }
    if (idx > end or idy < beg)
    {
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + end) / 2;
    update(idx,idy,left,beg,mid,cng);
    update(idx,idy,right,mid+1,end,cng);
    one[node]=one[left]^one[right];
    zero[node]=zero[left]^zero[right];
}
void solve()
{
    int n; cin>>n;
    vi v(n+1,0);
    int one=0;
    int zero=0;
    vi pre(n+1,0);
    for(int i=1;i<=n;i++)cin>>v[i];
    pre = v;
    for(int i=1;i<=n;i++)pre[i]^=pre[i-1];
    string s; cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            zero^=v[i+1];
        }
        else
        {
            one^=v[i+1];
        }
    }
    int q; cin>>q;
    w(q)
    {
        int c; cin>>c;
        int bad;
        if(c==1)
        {
            int l,r; cin>>l>>r;
            bad=pre[r]^pre[l-1];
            one^=bad;
            zero^=bad;
        }
        else
        {
            int x; cin>>x;
            if(x==1)cout<<one<<" ";
            else cout<<zero<<" ";
        }
    }

    cout<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}