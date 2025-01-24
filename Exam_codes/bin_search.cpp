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
#define loop for (int i = 0; i < n; i++)
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
// int bin_search(vi &v,int l,int r,int k)
// {
//     if(l<=r)
//     { 
//         int mid=(l+r)/2;
//         if(v[mid]==k)
//         {
//             return mid+1;
//         }
//         if(v[mid]>k)
//         {
//             return bin_search(v,l,mid-1,k);
//         }
//         else
//         {
//             return bin_search(v,mid+1,r,k);
//         }
//     }
//     return -1;
// }
bool bin_search(vi &v,int l,int r,int k)
{
    int ll=l,rr=r;
    while(ll<=rr)
    {
        int mid=(ll+rr)/2;
        if(v[mid]==k)
        {
            return true;
        }
        if(v[mid]>k)
        {
            rr=mid-1;
        }
        else
        {
            ll=mid+1;
        }
    }
    return false;
}
void solve()
{
    int n,k; cin>>n>>k;
    vi v(n);
    loop cin>>v[i];
    int ans=bin_search(v,0,n-1,k);
    cout<<ans<<nl;
}
int main()
{
    Ahsanul;
    //test
    solve();
}