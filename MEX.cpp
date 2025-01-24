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
int mex(vector<int> a)
{
    int n = a.size();
    vector<bool> ache(n + 1, false);
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= n)
        {
            ache[a[i]] = true;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (!ache[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(1 << n, 0);
        for (int i = 0; i < (1 << n); i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                if ((i >> j) & 1)
                {
                    sum += a[j];
                }
            }
            b[i] = sum;
        }
        cout << mex(b) << endl;
    }
    return 0;
}