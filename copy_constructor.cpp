// copy constructor
#include <bits/stdc++.h>
using namespace std;
class myclass
{
    int *n;
    int sz;

public:
    myclass(int s)
    {
        n=new int[s];
        if(!n)
        {
            exit(1);
        }
        sz=s;
        cout<<"Using normal constructor"<<endl;
    }
    ~myclass()
    {
        delete []n;
    }
    myclass(myclass &a);
    void put(int i,int j)
    {
        if(i>=0 and j<=sz)
        {
            n[i]=j;
        }
    }
    int get(int i)
    {
        return n[i];
    }
};
myclass :: myclass(myclass &a)
{
    sz=a.sz;
    n=new int [sz];
    if(!n)
    {
        exit(1);
    }
    for(int i=0;i<sz;i++)
    {
        n[i]=a.n[i];
    }
    cout<<"Using copy constructor"<<endl;
}
int main()
{
    myclass Ob(10);
    for(int i=0;i<10;i++)
    {
        Ob.put(i,i+1);
    }
    for(int i=0;i<10;i++)
    {
        cout<<Ob.get(i)<<" ";
    }
    cout<<endl;
    myclass cp=Ob;
    for(int i=0;i<10;i++)
    {
        cout<<cp.get(i)<<" ";
    }

}