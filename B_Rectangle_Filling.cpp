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
    int n,m; cin>>n>>m;
    char v[n+1][m+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    // if(n==1)
    // {
    //     for(int i=0;i<m-1;i++)
    //     {
    //         if(v[0][i]!=v[0][i+1])
    //         {
    //             cout<<"NO"<<endl;
    //             return;
    //         }
    //     }
    //     cout<<"YES"<<endl;
    //     return;
    // }
    bool check=false,checkk=false;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[0][i]==v[n-1][j])
            {
                check=true;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i][0]==v[j][m-1])
            {
                checkk=true;
                break;
            }
        }
    }
    if(check and checkk)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    Ahsanul;
    test
    solve();
}