/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
class students
{
private:
    string name;
    string roll;
    double grade;
public:
    void input();
    void show();
};
void students::input()
{
    cout<<"Name: ";cin>>name;
    cout<<'\n';
    cout<<"Roll: ";cin>>roll;
    cout<<'\n';
    cout<<"Grade: ";cin>>grade;
    cout<<'\n';
}
void students::show()
{
    cout<<"Name: "<<name<<'\n';
    cout<<"Roll: "<<roll<<'\n';
    cout<<"Grade: "<<grade<<'\n';
}
int main()
{
    students info[4];
    for(int i=1;i<=3;i++)
    {
        cout<<"Fill for the "<<i<<" th student"<<'\n';
        info[i].input();
    }
    for(int i=1;i<=3;i++)
    {
        cout<<"Info of "<<i<<" th student"<<'\n';
        info[i].show();
    }
}