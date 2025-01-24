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
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n; cin>>n;
    vector<vi>a(n+1,vector<int>(n+1,0));
    int k=(n*n);
    int x=1;
    bool key=true;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(key)
            {
                a[i][j]=k;
                k--;
                key=false;
            }
            else
            {
                a[i][j]=x;
                x++;
                key=true;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            reverse(a[i].begin()+1,a[i].end());
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
                                    /////correction check 
    // set<int>fuck;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<n;j++)
    //     {
    //         fuck.insert(abs(a[i][j]-a[i][j+1]));
    //     }
    // }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<n;j++)
    //     {
    //         fuck.insert(abs(a[j][i]-a[j+1][i]));
    //     }
    // }
    // // cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    // // for(auto it:fuck)cout<<it<<" ";
    // cout<<fuck.size()<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}