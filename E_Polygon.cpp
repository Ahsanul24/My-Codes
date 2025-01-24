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
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n; cin>>n;
    char a[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }

    bool check=true;
    for(int i=n;i>=1;i--)
    {
        bool row=true,col=true;
        for(int j=n;j>=1;j--)
        {
            if(a[i][j]=='1')
            {
                bool zero=false;
                for(int k=1;k<i;k++)
                {
                    if(a[i][k]=='0')zero=true;
                    if(zero)
                    {
                        if(a[i][k]=='1')
                        {
                            row=false;
                            break;
                        }
                    }
                }
                zero=false;
                for(int k=1;k<j;k++)
                {
                    if(a[k][j]=='0')zero=true;
                    if(zero)
                    {
                        if(a[k][j]=='1')
                        {
                            col=false;
                            break;
                        }
                    }
                }
            }
        }
        if(!col and !row)
        {
            check=false;
            break;
        }
    }
    if(check)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}