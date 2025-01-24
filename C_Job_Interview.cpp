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
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    ll n,m; cin>>n>>m;
    ll can=n+m+1;
    vl pro(can),tes(can);
    for(int i=0;i<can;i++)cin>>pro[i];
    for(int i=0;i<can;i++)cin>>tes[i];
    vector<bool> pro_selec(can,false),tes_selec(can,false);
    ll tem_pro=0,tem_tes=0;
    int cntp=0,cnts=0;
    //programmer 1 jon beshi
    for(int i=0;i<can;i++)
    {
        if(pro[i]>tes[i] and cntp<=n)
        {
            cntp++;
            pro_selec[i]=true;
            tem_pro+=pro[i];
        }
        else if(tes[i]>pro[i] and cnts<m)
        {
            cnts++;
            tem_pro+=tes[i];
            tes_selec[i]=true;
        }
        else if(cntp<=n)
        {
            cntp++;
            pro_selec[i]=true;
            tem_pro+=pro[i];
        }
        else
        {
            cnts++;
            tem_pro+=tes[i];
            tes_selec[i]=true;
        }
    }
    cntp=0,cnts=0;
    //tester 1 jon beshi
    for(int i=0;i<can;i++)
    {
        if(tes[i]>pro[i] and cnts<=m)
        {
            cnts++;
            tes_selec[i]=true;
            tem_tes+=tes[i];
        }
        else if(tes[i]<pro[i] and cntp<n)
        {
            cntp++;
            tem_tes+=pro[i];
            pro_selec[i]=true;
        }
        else if(cntp<n)
        {
            cntp++;
            tem_tes+=pro[i];
            pro_selec[i]=true;
        }
        else
        {
            cnts++;
            tem_tes+=tes[i];
            tes_selec[i]=true;
        }
    }
    vl res;
    for(int i=0;i<can;i++)
    {
        if(pro_selec[i])
        {
            res.pb(tem_pro-pro[i]);
        }
        else if(tes_selec[i])
        {
            res.pb(tem_tes-tes[i]);
        }
    }
    for(auto it:res)cout<<it<<" ";cout<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}