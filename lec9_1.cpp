#include<bits/stdc++.h>
using namespace std;
int main()
{
    float *f;
    int *i;
    char *c;
    f=new float;
    i=new int;
    c=new char;
    if(!f or !i or !c)
    {
        cout<<"Allocation error!"<<endl;
        return 0;
    }
    cin>>*f>>*i>>*c;
    cout<<*f<<" "<<*i<<" "<<*c<<endl;
    delete f;
    delete i;
    delete c;
}