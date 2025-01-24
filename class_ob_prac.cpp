#include<bits/stdc++.h>
using namespace std;
class samp
{
private:
    int i;
public:
    void show()
    {
        cout<<i<<endl;
    }
    void set(int n)
    {
        i=n;
    }
};
samp fun()
{
    samp o;
    o.set(10);
    return o;
}
int main()
{
    samp ob;
    ob=fun();
    ob.show();
}

