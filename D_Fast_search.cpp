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
int n;
int binl(vector<int>&v,int val)
{
    int l=-1,r=n;
    while(l+1<r)
    {
        int mid=l+(r-l)/2;
        if(v[mid]>=val)
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    return l+1;
}
int binr(vector<int>&v,int val)
{
    int l=-1,r=n;
    while(l+1<r)
    {
        int mid=l+(r-l)/2;
        if(v[mid]<=val)
        {
            l=mid;
        }
        else
        {
            r=mid;
        }
    }
    return r;
}
void solve()
{
    cin>>n;
    vi v(n);
    loop cin>>v[i];
    srt(v);
    int q; cin>>q;
    w(q)
    {
        int x,y; cin>>x>>y;
        //cout<<binl(v,x)<<" "<<binr(v,y)<<endl;
        cout<<binr(v,y)-binl(v,x)<<" ";
    }
}
int main()
{
    Ahsanul;
 //   test
    solve();
}