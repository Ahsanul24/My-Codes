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
    string s;cin>>s;
    int match=0,cnt=0;
    bool check=false;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])match++;
        else cnt++;
    }
    if(n&1)check=true;
    // if (match == n / 2)
    // {
    //     for (int i = 0; i <= n; i++)
    //     {
    //         cout << 1;
    //     }
    //     cout << endl;
    //     return;
    // }
    string t = "";
    for(int i=0;i<=n;i++)
    {
        if(i<cnt)
        {
            t+="0";
            continue;
        }
        if(i==cnt)
        {
            t+="1";
            continue;
        }
        int tem=i;
        tem-=cnt;
        if(tem%2==0 and match*2>=tem)
        {
            t+="1";
            continue;
        }
        if(tem&1)
        {
            if(check and match*2>=tem-1)
            {
                t+="1";
            }
            else
            {
                t+="0";
            }
            continue;
        }
        t+="0";
    }
    cout<<t<<endl;
    //cout<<cnt<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}