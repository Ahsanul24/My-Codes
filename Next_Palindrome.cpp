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
const int N=1e5+10;
bool is_palindrome(int n)
{
    string s = to_string(n);
    return s == string(s.rbegin(), s.rend());
}

bool is_prime(int n)
{
    vector<bool> v(N, true);
    v[0] = v[1] = false;
    for (int i = 2; i <= N; i++)
    {
        if (v[i])
        {

            for (int j = i * 2; j <= N; j += i)
            {
                v[j] = false;
            }
        }
    }
    return v[n];
}

int next_palindrome_prime(int n)
{
    for (int i = 1;; ++i)
    {
        if (is_palindrome(n+i) && is_prime(i))
        {
            return i;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << next_palindrome_prime(n) << endl;
    }
    return 0;
}
