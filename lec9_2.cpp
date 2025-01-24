#include <bits/stdc++.h>
using namespace std;
class samp
{
private:
    string name,phone;
public:
    void set(string a,string b)
    {
        name=a;
        phone=b;
    }
    void show();
};
void samp::show()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Phone: "<<phone<<endl;
}
int main()
{
    samp *ob;
    ob=new samp;
    if(!ob)
    {
        cout<<"Allocation error"<<endl;
        return 0;
    }
    string a,b; 
    cin>>a>>b;
    ob->set(a,b);
    ob->show();
}
