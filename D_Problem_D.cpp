// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
const int  MOD = 10;
int power(long long  a,long  long b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    long long a,b; cin>>a>>b;
    long long ans=power(a,b);
    cout<<ans<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    solve();
}