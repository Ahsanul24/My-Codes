// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1e9+7
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
void solve()
{
    string a,b; cin>>a>>b;
    if(a==b)
    {
        cout<<"YES"<<endl;
        cout<<a<<endl;
        return;
    }
    if(a[0]==b[0])
    {
        cout<<"YES"<<endl;
        cout<<a[0]<<"*"<<endl;
        return;
    }
    if(a[a.size()-1]==b[b.size()-1])
    {
        cout<<"YES"<<endl;
        cout<<"*"<<a[a.size()-1]<<endl;
        return;
    }
    vector<string>v;
    bool check=false;
    string paichi;
    for(int i=0;i<a.size();i++)
    {
        for(int j=1;j<=a.size();j++)
        {
            string tem=a.substr(i,j);
            if(b.find(tem)!=string::npos and tem.size()>=2)
            {
                check=true;
                paichi=tem;
                break;
            }
        }
    }
    if(check)
    {
        cout<<"YES"<<endl;
        cout<<"*"<<paichi<<"*"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}