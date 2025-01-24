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
int cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;
    }
    else
    {
        return a.second>b.second;
    }
}
void solve()
{
    int a,aa,aaa;
    string s,ss,sss;
    char c,cc,ccc;
    int b,bb,bbb;
    int resid=0;
    string res="";
    char r;
    int resmark=0;
    cin >> a >> s >> c >> b;
    cin >> aa >> ss >> cc >> bb;
    cin >> aaa >> sss >> ccc >> bbb;
    vector<pair<int,int>>v;
    v.pb({a,b});
    v.pb({aa,bb});
    v.pb({aaa,bbb});
    sort(v.begin(),v.end(),cmp);
    int tem=v[0].F;
    if(a==tem)
    {
        cout<<a<<" "<<s<<" "<<c<<" "<<b<<endl;
    }
    else if(aa==tem)
    {
        cout << aa << " " << ss << " " << cc << " " << bb << endl;
    }
    else 
    {
        cout << aaa << " " << sss << " " << ccc << " " << bbb << endl;
    }
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}