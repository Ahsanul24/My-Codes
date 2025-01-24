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
bool isprime(int x)
{
    if(x<2){
        return false;
    }
        for(int i=2;i<=sqrt(x);i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
}
int main()
{
    Ahsanul;
    int m,n;
    cin>>m>>n;
    int count=0;
    if(isprime(m)==1 && isprime(n)==1){
        for(int i=m+1;i<n;i++){
            if(isprime(i)==1){
                count++;
            }
        }
        if(count==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else if(isprime(m)==1 && isprime(n)==0){
        printf("NO");
    }
}
