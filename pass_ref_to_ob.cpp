// Passing References to objects
#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int n; 
public:
    myclass(int x)
    {
        n=x;
        cout<<"Constructing"<<n<<endl;
    }
    ~myclass()
    {
        cout<<"Destructing:"<<n<<endl;
    }
    int id()
    {
        return n;
    }
};
void fun(myclass &ob)
{
    cout<<"Recived "<<ob.id()<<endl;
}
int main()
{
    myclass o(1);
    fun(o);
    return 0;
}