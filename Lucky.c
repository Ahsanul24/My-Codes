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
    int n;
    char str[7];
    cin>>n;
    while(n--){
        scanf("%s",&str);
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++){
            sum1+=str[i];
        }
        for(int j=3;j<6;j++){
            sum2+=str[j];
        }
        if(sum1==sum2)
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
}