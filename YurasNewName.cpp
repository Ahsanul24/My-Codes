// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void solve()
{
    string str; cin>>str;
    int ans=0;
    if(str[0]=='_')ans+=1;
    bool check=false;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == '_' && str[i + 1] != '^')
        {
            ans++;
        }
        if(str[i]=='_')check=true;
    }
    if(!check)
    {
        if ((str.length()) < 2)
        {
            ans=1;
        }
        else
        {
            ans=0;
        }
    }
    if (str[str.length() - 1] != '^')
        ans += 1;
    cout<<ans<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}