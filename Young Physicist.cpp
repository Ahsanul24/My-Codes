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
    int n, x, y, z, sum1 = 0, sum2 = 0, sum3 = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d %d", &x, &y, &z);
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
int main()
{
    Ahsanul;
    solve();
}