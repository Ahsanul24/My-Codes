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
    int t;
    cin>>t;
    w(t){
        char str1[4],str2[4],str3[4];
        scanf("%s %s %s",&str1,&str2,&str3);
        if(str1[0]=='X'&&str1[1]=='X'&&str1[2]=='X'|| str2[0]=='X'&&str2[1]=='X'&&str2[2]=='X' || str3[0]=='X'&&str3[1]=='X'&&str3[2]=='X'){
            printf("X");
        }
        else if(str1[0]=='+'&&str1[1]=='+'&&str1[2]=='+'|| str2[0]=='+'&&str2[1]=='+'&&str2[2]=='+' || str3[0]=='+'&&str3[1]=='+'&&str3[2]=='+'){
            printf("+");
        }
        else if(str1[0]=='O'&&str1[1]=='O'&&str1[2]=='O'|| str2[0]=='O'&&str2[1]=='O'&&str2[2]=='O' || str3[0]=='O'&&str3[1]=='O'&&str3[2]=='O'){
            printf("O");
        }
        else if(str1[0]=='X' && str2[1]=='X' && str3[2]=='X' || str1[2]=='X' && str2[1]=='X' && str3[0]=='X'){
            printf("X");
        }
        else if(str1[0]=='O' && str2[1]=='O' && str3[2]=='O' || str1[2]=='O' && str2[1]=='O' && str3[0]=='O'){
            printf("O");
        }
        else if(str1[0]=='+' && str2[1]=='+' && str3[2]=='+' || str1[2]=='+' && str2[1]=='+' && str3[0]=='+'){
            printf("+");
        }
        else if(str1[0]=='X' && str2[0]=='X' && str3[0]=='X' || str1[1]=='X' && str2[1]=='X' && str3[1]=='X' || str1[2]=='X' && str2[2]=='X' && str3[2]=='X'){
            printf("X");
        }
        else if(str1[0]=='O' && str2[0]=='O' && str3[0]=='O' || str1[1]=='O' && str2[1]=='O' && str3[1]=='O' || str1[2]=='O' && str2[2]=='O' && str3[2]=='O'){
            printf("O");
        }
        else if(str1[0]=='+' && str2[0]=='+' && str3[0]=='+' || str1[1]=='+' && str2[1]=='+' && str3[1]=='+' || str1[2]=='+' && str2[2]=='+' && str3[2]=='+'){
            printf("+");
        }
        else{
            printf("DRAW");
        }
        cout<<endl;
    }
}
