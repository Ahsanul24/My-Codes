// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        bool up = false, right = false, down = false, left = false;
        while(n--)
        {
            int a, b;
            cin >> a >> b;
            if (a > 0)
                right = true;
            else if (a < 0)
                left = true;
            if (b > 0)
                up = true;
            else if (b < 0)
                down = true;
        }
        if (up and right and down and left)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}