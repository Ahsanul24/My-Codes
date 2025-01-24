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
    int t,n;
    cin>>t;
    w(t){
        cin>>n;
        char str[n];
        scanf("%s",&str);
        int a=0,b=0,c=0,d=0,e=0;
            for(int i=0;i<strlen(str);i++){
                if(str[i]=='T'){
                    a++;
                }
                else if(str[i]=='m'){
                    b++;
                }
                else if(str[i]=='i'){
                    c++;
                }
                else if(str[i]=='u'){
                    d++;
                }
                else if(str[i]=='r'){
                    e++;
                }
            }
            if(a==1 && b==1 && c==1 && d==1 && e==1 && strlen(str)==5){
                printf("YES");
            }
            else{
                printf("NO");
            }
            cout<<endl;
    }
}
