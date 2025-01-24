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
void solve()
{
    int n; cin>>n;
    int max1=0;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        max1=max(max1,a[i]);
    }
    int max2=0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        max2=max(max2,b[i]);
    }
    int def=abs(max1-max2);
    vector<int>res;
    for(int i=0;i<n;i++)
    {
        int x=a[i]-def;
        if(x>=0)
        {
            res.push_back(x);
        }
        else{
            res.push_back(0);
        }
    }
    if(res!=b)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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