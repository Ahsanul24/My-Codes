/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
int MAX=1e5;
class shopping
{
private:
    vector<string>codes;
    vector<int>prices;
    int item;
public:
    shopping()
    {
        item=0;
    }
    void add_item();
    void delete_item();
    void show()
    {
        long long int sum=0;
        for(int i=0;i<item;i++)
        {
            sum+=prices[i];
        }
        cout<<"Total Items: "<<item<<'\n';//vec_name.size()
        cout<<"Total Price: "<<sum<<'\n';
    }
};
void shopping :: add_item()
{
    string code;
    int pp;
    cout<<"Enter the code number: "<<'\n';
    cin>>code;
    cout<<"Enter the price: "<<'\n';
    cin>>pp;
    codes.push_back(code);
    prices.push_back(pp);
    item++;
    cout<<"Added"<<'\n';
}
void shopping :: delete_item()
{
    if(item==0)
    {
        cout<<"List Empty! Can't delete"<<'\n';
        return;
    }
    string code;
    cout<<"Enter the code of deleted item: "<<'\n';
    cin>>code;
    int idx=-1;
    for(int i=0;i<item;i++)
    {
        if(codes[i]==code)
        {
            idx=i;
            break;
        }
    }
    if(idx==-1)
    {
        cout<<"Not Found Item"<<'\n';
        return;
    }
    else
    {
        codes.erase(codes.begin()+idx);
        prices.erase(prices.begin()+idx);
        item--;
        cout<<"Item "<<code<<" deleted from list"<<'\n';
        return;
    }
}
int main()
{
    shopping list;
    cout<<"Press 1 to add item:"<<'\n';
    cout<<"Press 2 to delete item:"<<'\n';
    cout<<"Press 3 to print total price:"<<'\n';
    cout<<"Press 0 to exit!"<<'\n';
    while(true)
    {
        int key; cin>>key;
        if(key==1)
        {
            list.add_item();
            continue;
        }
        else if(key==2)
        {
            list.delete_item();
            continue;
        }
        else if(key==3)
        {
            list.show();
            continue;
        }
        else if(key==0)
        {
            break;
        }
        else
        {
            cout<<"Invalid key!!!!!!!"<<'\n';
        }
    }
}