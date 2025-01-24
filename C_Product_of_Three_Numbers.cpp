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
const int N=1e5+10;
void solve()
{
    int n; cin>>n;
    int copy=n;
    int a=0,b=0,c=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a=i;
            n/=i;
            break;
        }
    }
    for(int i=a+1;i*i<=n;i++)
    {
        if(n%i==0 && i*i!=n)
        {
            b=i;
            c=n/i;
            break;
        }
    }
    if(a*b*c==copy)
    {
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}