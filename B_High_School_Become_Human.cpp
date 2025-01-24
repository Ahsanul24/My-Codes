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
// int powab(int a,int b)
// {
//     int r=1;
//     while(b)
//     {
//         if(b&1)
//         {
//             r=(r * 1ll * a)%MOD;
//         }
//         a= (a *1ll * a)%MOD;
//         b>>=1;
//     }
//     return r;
// }
// int powba(int b,int a)
// {
//     int rr=1;
//     while(a)
//     {
//         if(a&1)
//         {
//             rr=(rr * 1ll * b)%MOD;
//         }
//         b=(b *1ll * b)%MOD;
//         a>>=1;
//     }
//     return rr;
// }
void solve()
{
    int a,b; cin>>a>>b;
    // int ab=powab(a,b);
    // int ba=powba(b,a);
    // if(ab==ba)
    // {
    //     cout<<"="<<endl;;
    // }
    // else if(ab>ba)
    // {
    //     cout<<">"<<endl;
    // }
    // else
    // {
    //     cout<<"<"<<endl;;
    // }
    // cout<<ab<<" "<<ba<<endl;
    if((b*(log(a)))==(a*(log(b))))
    {
        cout<<"="<<endl;
    }
    else if((b*(log(a)))>(a*(log(b))))
    {
        cout<<">"<<endl;
    }
    else
    {
        cout<<"<"<<endl;
    }
}
int main()
{
    Ahsanul;
    solve();
}