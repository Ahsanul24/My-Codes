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
    int n,c,d; cin>>n>>c>>d;
    map<int,int>m;
    vi v(n*n);
    for(int i=0;i<n*n;i++)
    {
        cin>>v[i];
        m[v[i]]++;
    } 
    int a[n+1][n+1];
    srt(v);
    a[0][0]=v[0];
    bool check=true;
    for(int i=0;i<n;i++)
    {
        if(i>0)
        {
            a[0][i]=a[0][i-1]+d;
            if(!m[(a[0][i])])
            {
                check=false;
                break;
            }
            m[(a[0][i])]--;
        }
        for(int j=1;j<n;j++)
        {
            a[j][i]=a[j-1][i]+c;
            if(!m[(a[j][i])])
            {
                check=false;
                break;
            }
            m[(a[j][i])]--;
        }

    }
    if(check)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}