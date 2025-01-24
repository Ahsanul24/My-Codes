// Overloading Constructor Functions
#include <bits/stdc++.h>
using namespace std;
class myclass
{
    int n;

public:
    myclass()
    {
        n = 0;
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
    myclass Ob1[10];
    myclass Ob2[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        cout<<"Ob1 Values:"<<Ob1[i].get()<<" ";
        cout<<endl;
        cout<<"Ob2 Values: "<<Ob2[i].get()<<" ";
        cout<<endl;
    }
}