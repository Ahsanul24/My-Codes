// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;

#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define en endl
#define bit(a) __builtin_popcountll(a)
#define w(x) while (x--)
#define test int t; cin >> t; for (int i = 0; i < t; i++)
#define loop(n) for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))

vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves
int power(int a, int b) { int res = 1; while (b) { if (b & 1) { res = (res * 1ll * a) % MOD; } a = (a * 1ll * a) % MOD; b >>= 1; } return res; }

int n, k;
vi v;
vi tem;

void call(int pos) {
    if (pos == n + 1) {
        int sum = accumulate(tem.begin(), tem.end(), 0LL);
        if (sum % k == 0) {
            for (int i = 0; i < n; i++) cout << tem[i] << " ";
            cout << en;
        }
        return;
    }
    for (int i = 1; i <= v[pos]; i++) {
        tem.pb(i);
        call(pos + 1);
        tem.pop_back();
    }
}

void solve() {
    cin >> n >> k;
    v.resize(n + 1); // Resize the vector to n+1
    for (int i = 1; i <= n; i++) cin >> v[i];
    call(1);
}

int main() {
    Ahsanul;
    solve();
}
