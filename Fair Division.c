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
    int test;
    scanf("%d",&test);
    w(test){
        int n;
        scanf("%d",&n);
        int ara[n];
        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        int one=0,two=0;
        for(int i=0;i<n;i++){
            if(ara[i]==1){
                one++;
            }
            else{
                two++;
            }
        }
        int candy=(1*one)+(2*two);
        if(candy%2==1){
            printf("NO");
        }
        else{
            if(two%2==1){
                if(one>=2){
                    printf("YES");
                }
                else{
                    printf("NO");
                }
            }
            else{
                printf("YES");
            }
        }
        cout<<endl;
    }
}
