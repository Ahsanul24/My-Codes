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
    vi v(n);
    loop cin>>v[i];
    ll maxi=*max_element(v.begin(),v.end());
    ll maxii=maxi+1;
    ll ans=LLONG_MAX;
    ll l=0,r=1e18;
    { 
        ll res=-1;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            ll ev=mid/2,odd=(mid+1)/2;
            ll cnt_ev=0,cnt_od=0;
            for(int i=0;i<n;i++)
            {
                ll baki=maxi-v[i];
                if(baki&1)
                {
                    cnt_od++;
                }
                ll tem=baki/2;
                if(ev>=tem)
                {
                    ev-=tem;
                }
                else
                {
                    tem-=ev;
                    ev = 0;
                    cnt_od+=(tem*2);
                }
            }
            if(odd>=cnt_od)
            {
                ans=min(ans,mid);
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        //cout<<l<<" "<<r<<en;
    }
    {
        l=0,r=1e18;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            ll ev=mid/2,odd=(mid+1)/2;
            ll cnt_ev=0,cnt_od=0;
            for(int i=0;i<n;i++)
            {
                ll baki=maxii-v[i];
                if(baki&1)
                {
                    cnt_od++;
                }
                ll tem=baki/2;
                if(ev>=tem)
                {
                    ev-=tem;
                }
                else
                {
                    tem-=ev;
                    ev = 0;
                    cnt_od+=(tem*2);
                }
            }
            if(odd>=cnt_od)
            {
                ans=min(ans,mid);
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        //cout<<l<<" "<<r<<en;
    }
    cout<<ans<<en;
}
int main()
{
    Ahsanul;
    test
    solve();
}