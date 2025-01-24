/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
class account
{
protected:
    string name;
    string type;
    string acc_no;
    double ini_bal;
public:
    account(string n,string t,string no,double a)
    {
        name=n;
        type=t;
        acc_no=no;
        ini_bal=a;
    }
    void show()
    {
        cout<<"Balance: "<<ini_bal<<endl;
    }
};
class curr_acc:public account
{
private:
    double min_bal;
    double charge;
public:
    curr_acc(double mb,double ch,string n,string t,string no,double a):account(n,t,no,a)
    {
        min_bal=mb;
        charge=ch;
    }
    void deposit(double am)
    {
        ini_bal+=am;
        cout<<"Deposited"<<endl;
    }
    void mini_bal_charge()
    {
        if(ini_bal<min_bal)
        {
            ini_bal-=charge;
            cout<<"Minimum balance charge applicable"<<endl;
        }
    }
    void withdraw(double amount)
    {
        if(ini_bal-amount>=min_bal)
        {
            ini_bal-=amount;
            cout<<"Wihtdraw Successful"<<endl;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }
};
class sav_acc:public account
{
private:
    double interest_rate;
public:
    sav_acc(double ir,string n,string t,string no,double a):account(n,t,no,a)
    {
        interest_rate=ir;
    }
    void deposit(double amount)
    {
        ini_bal+=amount;
        cout<<"Deposited"<<endl;
    }
    void addInterest()
    {
        double mot=ini_bal*(interest_rate/100);
        ini_bal+=mot;
        cout<<"Interest added"<<endl;
    }
    void withdraw(double amount)
    {
        if(amount<=ini_bal)
        {
            ini_bal-=amount;
            cout<<"Withdraw succesful"<<endl;
        }
        else
        {
            cout<<"Insufficient Bal"<<endl;
        }
    }
};
int main()
{
    sav_acc saving(23,"Alice","Saving","1234",100000.23);
    curr_acc current(110.23,2.3,"Bob","Current","5678",550.5);
    cout<<"Savings Account:"<<endl;
    saving.deposit(1000.34);
    saving.addInterest();
    saving.withdraw(560);
    saving.show();
    cout<<endl;
    cout<<"Current Account: "<<endl;
    current.deposit(4500);
    current.mini_bal_charge();
    current.withdraw(100000);
    current.show();
}
