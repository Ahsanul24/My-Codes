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
    int n,k; cin>>n>>k;
    vi v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(is_sorted(v.begin(),v.end()))
    {
        cout<<"0"<<endl;
        return;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        int a=abs(v[i]-(i+1));
        if(a%k!=0)
        {
            count++;
        }
    }
    if(count>2)
    {
        cout<<"-1"<<endl;
        return;
    }
    if(count==2)
    {
        cout<<"1"<<endl;
        return;
    }
    cout<<"0"<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w (t)
    {
        solve();
    }
    
}