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
void solve()
{
    int n; cin>>n;
    int a[n+1][n+1];
    bool check=true;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]<0)
            {
                check=false;
            }
        }
    }
    if(check)
    {
        cout<<0<<nl;
        return;
    }
    int ans=0;
    //upper matrix
    for(int col=n;col>=1;col--)
    {
        int maxi=INT_MIN;
        for(int i=1,j=col;i<=(n-col)+1;i++,j++)
        {
            if(a[i][j]<0)
            {
                maxi=max(maxi,abs(a[i][j]));
                a[i][j]=0;
            }
            a[i][j]=0;
        }  
        if(maxi!=INT_MIN) 
            ans+=maxi;
    }
    //lower matrix
    for(int col=1;col<n;col++)
    {
        int maxi=INT_MIN;
        {
            for(int i=n,j=col;i>=(n-col)+1;i--,j--)
            {
                if(a[i][j]<0)
                {
                    maxi=max(maxi,abs(a[i][j]));
                    a[i][j]=0;
                }
                a[i][j]=0;
            }
        }
        if(maxi!=INT_MIN)
            ans+=maxi;
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<nl;
    // }
    cout<<ans<<nl;
}
int main()
{
    Ahsanul;
    test
    solve();
}