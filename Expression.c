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
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int r1=a+(b*c);
    int r2=a*(b+c);
    int r3=(a*b*c);
    int r4=(a+b)*c;
    int r5=a+b+c;
    int r6=(a*b)+c;
    int p1=max({r1,r2,r3});
    int p2=max({r4,r5,r6});
    if(p1>p2){
        printf("%d",p1);
    }
    else{
        printf("%d",p2);
    }
}
