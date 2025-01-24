/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
class students
{
protected:
    string roll;
public:
    students(string tem)
    {
        roll=tem;
    }
};
class test:public students
{
private:
    int mark1,mark2;
public:

    test(string r,int a,int b):students(r)
    {
        mark1=a;
        mark2=b;
    }
};
class result:public test
{
protected:
    int tot;
public:

    result(string r,int a,int b):test(r,a,b)
    {
        tot=a+b;
    }
    void show()
    {
        cout<<"Roll: "<<roll<<" Total marks: "<<tot<<endl;
    }
};
int main()
{

    cout<<"Enter roll and marks of two subject: "<<endl;
    string r;int a,b;
    cin>>r>>a>>b;
    result stu(r,a,b);//stu[]
    stu.show();
}