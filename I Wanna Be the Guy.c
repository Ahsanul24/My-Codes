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
    int n,p;
    scanf("%d %d",&n,&p);
    int ara1[p];
    for(int i=0; i<p; i++)
    {
        scanf("%d",&ara1[i]);
    }
    int q;
    scanf("%d",&q);
    int araa[q];
    for(int i=0; i<q; i++)
    {
        scanf("%d",&araa[i]);
    }
    for(int i=1; i<=n; i++)
    {
        bool checker=false;
        for(int j=0; j<p; j++)
        {
            if(ara1[j]==i)
            {
                checker=true;
                break;
            }
        }
        if(!checker)
        {
            for(int j=0; j<q; j++)
            {
                if(araa[j]==i)
                {
                    checker=true;
                    break;
                }
            }
        }

        if(!checker)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");

}
