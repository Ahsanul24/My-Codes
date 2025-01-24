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
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void s()
{
    int n; cin>>n;
    vector<pair<int,int>>v;
    int l=2,r=(n*3);
    while (l<r)
    {
        v.pb(make_pair(l,r));
        l+=3;
        r-=3;
    }
    cout<<v.size()<<endl;
    for(auto it:v)
    {
        cout<<it.F<<" "<<it.S<<endl;
    }
}
int main()
{
    int test; cin>>test;
    w(test)
    {
        s();
    }
}