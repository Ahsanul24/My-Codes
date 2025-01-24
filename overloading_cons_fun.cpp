// Overloading Constructor Functions
#include <bits/stdc++.h>
using namespace std;
class myclass
{
    int n;

public:
    myclass()
    {
        n=0;
    }
    myclass(int x)
    {
        n = x;
    }
    int get()
    {
        return n;
    }
};
int main()
{
    myclass ob1;
    myclass ob2(100);
    cout<<"ob1 value: "<<ob1.get()<<endl;
    cout<<"ob2 value: "<<ob2.get()<<endl;
}