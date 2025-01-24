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
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
const int N=2e5+10;
// int dp_sona[N];
// int call(int idx,int last,vi &v)
// {
//     int ans=0;
//     if(idx<0)return 0;
//     if(v[idx]<last)
//     {
//         ans= (1+call(idx-1,v[idx],v));
//     }
//     ans=max(ans,call(idx-1,last,v));
//     return ans;
// }
void solve()
{
    int n; cin>>n;
    //memset(dp_sona,-1,sizeof(dp_sona));
    vi v(n);
    loop cin>>v[i];
    //cout<<call(n-1,INT_MAX,v);
    vi lis;
    for(int i=0;i<n;i++)
    {
        if(lis.size()==0 or lis.back()<v[i])
        {
            lis.pb(v[i]);
        }
        else
        {
            auto it=lower_bound(lis.begin(),lis.end(),v[i])-lis.begin();
            lis[it]=v[i];
        }
    }
    cout<<lis.size()<<endl;
}
int main()
{
    Ahsanul;
    //test
    solve();
}