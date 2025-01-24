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
#define w(x) while(x--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void solve()
{
    int a,d; cin>>a>>d;
    string s;cin>>s;
    vector<char>v;
    for(int i=0;i<a;i++)
    {
        v.pb(s[i]);
    }
    int temp=0;
    bool check=false;
    for(int i=0;i<a;i++)
    {
        if(d>v[i]-'0')
        {
            temp=i;
            check=true;
            break;
        }
    }
    //  cout<<temp<<endl;
    if(d==0)
    {
        cout<<s;
        cout<<"0"<<endl;
        return;
    }
    if(temp==0 && v[0]-'0'<d)
    {
        cout<<d;
        cout<<s<<endl;
        return;
    }
    if(temp==0 && v[0]-'0'>=d)
    {
        cout<<s;
        cout<<d<<endl;
        return;
    }
    v.insert(v.begin()+temp,d+'0');
    for(auto it:v)
    {
        cout<<it;
    }
    cout<<endl;
}
int main()
{
    Ahsanul();
    int test; cin>>test;
    w(test)
    {
        solve();
    }
}