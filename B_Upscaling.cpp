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
    char a[2*n+1][2*n+1];
    for(int i=1;i<=2*n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            a[i][j]='.';
        }
    }
    int cnt=0;
    for(int i=1;i<=2*n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if (cnt == 2 or cnt==3)
            {
                if(j&1)
                {
                    j+=2;
                }
            }
            a[i][j]='#';
            if(j%2==0 and cnt!=2 and cnt!=3)
            {
                j+=2;
            }
        }
        if (cnt == 3)
        {
            cnt = -1;
        }
        cnt++;
    }
    for(int i=1;i<=2*n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    //cout<<endl;cout<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}