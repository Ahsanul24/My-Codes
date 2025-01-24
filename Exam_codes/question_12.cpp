/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
int sz;
class books
{
    char *author;
    char *title;
    char *publisher;
    double price;
    int stoks;
public:
    books()
    {
        author=new char [150];
        title=new char [150];
        publisher=new char [150];
    }
    void addbook(int x)
    {
        cout<<"Enter the author of "<<x<<" th book: "<<endl;
        cin>>author;
        cout << "Enter the title of " << x << " th book: " << endl;
        cin>>title;
        cout << "Enter the publisher of " << x << " th book: " << endl;
        cin>>publisher;
        cout << "Enter the price of " << x << " th book: " << endl;
        cin>>price;
        cout << "Enter the stock of " << x << " th book: " << endl;
        cin>>stoks;
    }
    bool search(string auth,string tit)
    {
        if(author==auth and tit==title)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void show()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Publisher: "<<publisher<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Stocks: "<<stoks<<endl;
    }
    pair<int,double>stk_price()
    {
        return {stoks,price};
    }
};
void dam(int koto, int tk)
{
    cout << "Total price of " << koto << " pices " << tk << endl;
    return;
}
int main()
{
    cout<<"Enter the number of books you wants to add: "<<endl;
    cin>>sz;
    books book[sz+1];
    for(int i=0;i<sz;i++)
    {
        book[i].addbook(i+1);
    }
    cout << "Enter press 1 to sell books: " << endl;
    while(true)
    {
        int n; cin>>n;
        if(n==1)
        {
            cout<<"Enter title & author name of book: "<<endl;
            string tit,auth; cin>>tit>>auth;
            cout<<"Enter number of copy you want: "<<endl;
            int cpy;cin>>cpy;
            int stk;
            double price;
            for(int i=0;i<sz;i++)
            {
                if(book[i].search(auth,tit))
                {
                    stk=book[i].stk_price().first;
                    price=book[i].stk_price().second;
                    if(stk>=cpy)
                    { 
                        dam(cpy, price * cpy);
                        break;
                    }
                    else
                    {
                        cout<<"Insufficient collection"<<endl;
                    }
                }
                else
                {
                    cout<<"NOT FOUND"<<endl;
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }
}