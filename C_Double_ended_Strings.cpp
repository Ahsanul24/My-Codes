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
    string a,b; cin>>a>>b;
    vector<string>asub,bsub;
    for(int i=0;i<a.size();i++)
    {
        for(int j=1;j<=a.size()-i;j++)
        {
            string tem=a.substr(i,j);
            asub.pb(tem);
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 1; j <= b.size() - i; j++)
        {
            string tem = b.substr(i, j);
            bsub.pb(tem);
        }
    }
    int ans=INT_MIN;
    for(auto it:asub)
    {
        string tem=it;
        int s=tem.size();
        if(find(bsub.begin(),bsub.end(),tem)!=bsub.end())
        {
            ans=max(ans,s);
        }
    }

    cout<<((a.size()+b.size())-(2*ans))<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}