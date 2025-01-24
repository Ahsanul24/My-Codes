// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
int itaretive(int a,int b)
{
    int res=1;
    while (b)
    {   
        if(b&1)
        {
            res=(res*1ll*a)%MOD;
        }
        a=(a*1ll*a)%MOD;
        b>>=1;
    }
    return res;
}
int binarymulti(ll a,ll b)//when a and b are in long long then we can't multipy them as storage shortage.then we apply this method
{
    int ans=0;
    while(b)
    {
        if(b&1)
        {
            ans=(ans+a)%MOD;
        }
        a=(a+a)%MOD;
        b>>=1;
    }
    return ans;
}
int itaretive2(int a,int b)
{
    int res=1;
    while(b)
    {
        if(b&1)
        {
            res=binarymulti(res,a);
        }
        a=binarymulti(a,a);
        b>>=1;
    }
    return res;
}
int main()
{
    Ahsanul;
    cout<<itaretive2(2,13)<<endl;
}