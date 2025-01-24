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
#define f first
#define s second
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
int cmp(pair<char,int>a,pair<char,int>b)
{
    return a.s<b.s;
}
void solve()
{
    string s; cin>>s;
    int n; cin>>n;
    vector<pair<char,int>>v;
    for(int i=0;i<s.size();i++)
    {
        v.pb({s[i],s[i]-96});
    }
    sort(v.begin(),v.end(),cmp);
    int sum=0;
    string tem="";
    for(int i=0;i<v.size();i++)
    {
        sum=n-v[i].s;
        if(sum>=0)
        {
            tem+=v[i].f;
            n-=v[i].s;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        auto it=tem.find(s[i]);
        if(it!=string::npos)
        {
            cout<<s[i];
            tem.erase(tem.begin()+it);
        }
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}