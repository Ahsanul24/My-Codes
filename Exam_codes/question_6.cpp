/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
class bank_acc
{
private:
    string depositor;
    string acc_no;
    string acc_type;
    double bal;
public:
    bank_acc(string s,string ac_no,string type,double amount)
    {
        depositor=s;
        acc_no=ac_no;
        acc_type=type;
        bal=amount;
    }
    void deposit(double amount)
    {
        bal+=amount;
        cout<<"Sucessfull"<<'\n';
    }
    void withdraw(double amount)
    {
        if(amount>0 and amount<=bal)
        {
            bal-=amount;
            cout<<"Withdraw"<<'\n';
        }
        else
        {
            cout<<"Insufficient Balance"<<'\n';
        }
    }
    void display()
    {
        cout<<"Name of Deposior: "<<depositor<<'\n';
        cout<<"Account Number: "<<acc_no<<'\n';
        cout<<"Type of Account: "<<acc_type<<'\n';
        cout<<"Balance: "<<bal<<'\n';
    }
};
int main()
{
    string nam,number,type;
    double balance;
    cin>>nam>>number>>type>>balance;
    bank_acc Account(nam,number,type,balance);
    double with,depo; cin>>depo>>with;
    Account.deposit(depo);
    Account.withdraw(with);
    Account.display();

}