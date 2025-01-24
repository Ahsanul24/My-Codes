// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>order_set;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define nl '\n';
#define bit(a) __builtin_popcountll(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 1; i <= n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd<long long int>(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
const int N=2e5+10;
int seg_tree[3 * N];
void build(vector<int> &v, int node, int beg, int end)
{
    if (beg == end)
    {
        seg_tree[node] = v[beg];
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + end) / 2;
    build(v, left, beg, mid);
    build(v, right, mid + 1, end);
    seg_tree[node] = seg_tree[left] & seg_tree[right]; // check here
}
int query(int node, int i, int j, int beg, int end)
{
    if (i > end or j < beg)
    {
        return INT_MAX;
    }
    if (i <= beg and j >= end)
    {
        return seg_tree[node];
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + end) / 2;
    int p = query(left, i, j, beg, mid);
    int q = query(right, i, j, mid + 1, end);
    return p & q; // check here
}
void solve()
{
    int n; cin>>n;
    vi v(n+1);
    loop cin>>v[i];
    build(v,1,1,n);
    // for(int i=1;i<=20;i++)
    // {
    //     cout<<seg_tree[i]<<" ";
    // }
    //cout<<nl;
    int q; cin>>q;
    w(q)
    {
        int l,k; cin>>l>>k;;
        int low=l,high=n;;
        int ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if (query(1, l, mid, 1, n ) >= k)
            {
                low=mid+1;
                ans=mid;
            }   
            else
            {
                high=mid-1;
            }
        }
        cout<<ans<<" ";
    }
    cout<<nl;
}
int main()
{
    Ahsanul;
    test
    solve();
}