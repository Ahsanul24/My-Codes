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
void solve()
{
    int n; cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            cin>>arr[i][j];
        }
    }
    int first;
    int a=arr[0][0],b=arr[1][0];
    int tem=arr[2][0];
    if(a==tem)
    {
        first=a;
    }
    else
    {
        first=b;
    }
    cout<<first<<" ";
    for(int i=0;i<n;i++)
    {
        if(arr[i][0]!=first)
        {
            for(int j=0;j<n-1;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            break;
        }
    }
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}