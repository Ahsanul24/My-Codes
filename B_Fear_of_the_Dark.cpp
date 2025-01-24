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
double dis(double x1,double y1,double x2,double y2)
{
    double ans= sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    return ans;
}
void solve()
{
    double px,py,ax,ay,bx,by; cin>>px>>py>>ax>>ay>>bx>>by;
    double OA=dis(0,0,ax,ay);
    double PB=dis(px,py,bx,by);
    double C=dis(ax,ay,bx,by);
    double PA=dis(px,py,ax,ay);
    double OB=dis(0,0,bx,by);
    double tem=min(PA,PB);
    double temp=min(OA,OB);
    double res=max(tem,temp);
    if ((min(PA, PB) == PA and min(OA, OB) == OA) or (min(PA, PB) == PB and min(OA, OB) == OB)){}
    else
    {
        if(2*res<C)
        {
            res=C/2;
        }
    }
        cout << fixed << setprecision(10) << res << endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}