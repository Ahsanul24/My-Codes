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
#define en endl;
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
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n; cin>>n;
    vi v(n+1);
    map<int,int>idx;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        idx[v[i]]=i;
    }
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<i<<" "<<idx[i]<<endl;
    // }
    vector<bool> vis(n+1,false);
    vi res(n+1,-1);
    int tar=n,prev=-1;
    int koto=(n/2)-1;
    for(int i=n;i>0 and koto;)
    {
        if(idx[i]!=1 and idx[i]!=n and !vis[idx[i]+1] and !vis[idx[i]-1])
        {
            res[idx[i]]=tar;
            prev=idx[i];
            vis[idx[i]]=true;
            tar--;
            i--;
            koto--;
            continue;
        }
        // else if(idx[i]!=1 and idx[i]!=n and abs(idx[i]-prev)>1)
        // {
        //     res[idx[i]]=tar;
        //     prev=idx[i];
        //     tar--;
        //     i--;
        //     koto--;
        //     continue;
        // }
        i--;
    }
    tar=1;
    for(int i=n;i>0;i--)
    {
        if(res[idx[i]]==-1)
        {
            res[idx[i]]=tar;
            tar++;
            //cout<<i<<" "<<idx[i]<<en;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<en;
}
int main()
{
    Ahsanul;
    test
    solve();
}