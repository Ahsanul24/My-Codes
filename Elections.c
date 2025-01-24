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
    Ahsanul;
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int large=max({a,b,c});
        if(large==a){
            if(a!=b && a!=c){
                printf("%d %d %d",0,a+1-b,a+1-c);
            }
            else if(a==b){
                printf("%d %d %d",1,1,a+1-c);
            }
            else if(a==c){
                printf("%d %d %d",1,a+1-b,1);
            }
            else{
                printf("%d %d %d",a+1,b+1,c+1);
            }
        }
        else if(large==b){
            if(b!=a && b!=c){
                printf("%d %d %d",b+1-a,0,b+1-c);
            }
            else if(b==c){
                printf("%d %d %d",b+1-a,1,1);
            }
        }
        else if(large==c){
                if(c!=a && c!=b){
                    printf("%d %d %d",c+1-a,c+1-b,0);
                }
        }
        printf("\n");
    }
}
