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
int check(int a,int b,int c,int d)
{
    if (a < b && a < c && b < d && c < d)
    {
        return 1;
    }
    return 0;
}
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int w=a,x=b,y=c,z=d;
    if(check(w,x,y,z))
    {
        cout<<"YES"<<endl;
        return;
    }
    x=a;z=b;y=d;w=c;
    if(check(w,x,y,z))
    {
        cout<<"YES"<<endl;
        return;
    }
    w=d;x=c;y=b;z=a;
    if(check(w,x,y,z))
    {
        cout<<"YES"<<endl;
        return;
    }
    w=b;x=d;y=a;z=c;
    if(check(w,x,y,z))
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
int main()
{
    Ahsanul;
    int test; cin>>test;
    w (test)
    {
        solve();
    }
    
}