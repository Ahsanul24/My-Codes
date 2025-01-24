/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include <bits/stdc++.h>
using namespace std;
class bank_acc
{
private:
    string depositor;
    string acc_no;
    string acc_type;
    double bal;

public:
    void set(string s, string ac_no, string type, double amount)
    {
        depositor = s;
        acc_no = ac_no;
        acc_type = type;
        bal = amount;
    }
    void deposit(double amount)
    {
        bal += amount;
        cout << "Sucessfull" << '\n';
    }
    void withdraw(double amount)
    {
        if (amount > 0 and amount <= bal)
        {
            bal -= amount;
            cout << "Withdraw" << '\n';
        }
        else
        {
            cout << "Insufficient Balance" << '\n';
        }
    }
    void display()
    {
        cout << "Name of Deposior: " << depositor << '\n';
        cout << "Account Number: " << acc_no << '\n';
        cout << "Type of Account: " << acc_type << '\n';
        cout << "Balance: " << bal << '\n';
    }
};
int main()
{
    bank_acc Account[11];
    string nam, number, type;
    double balance;
    for(int i=1;i<=3;i++)
    {
        cout<<"Enter Name,Acc No,Acc Type and Bal: "<<'\n';
        cin>>nam>>number>>type>>balance;
        Account[i].set(nam,number,type,balance);
    }
    for(int i=1;i<=10;i++)
    {
        Account[i].deposit(10834.23);
        Account[i].withdraw(340.23);
        Account[i].display();
    }
}