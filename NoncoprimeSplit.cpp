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
int divisor(int y)
{
    for(int i=2;i*i<=y;i++)
    {
        if(y%i==0)
        {
            return i;
        }
    }
}
bool prime(int x)
{
    if(x<2)
    {
        return false;
    }
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int a,b; cin>>a>>b;
    int x=(a+b)/2;
    if(a==b && prime(a) && prime(b))
    {
        cout<<"-1"<<endl;
        return;
    }
    
}
int main()
{
    int test; cin>>test;
    w (test)
    {
        solve();
    }
    
}