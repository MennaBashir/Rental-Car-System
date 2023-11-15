#include "Customer.h"
string Customer::setCustomer()
{
    cout<<"   Please, Fill in your data"<<endl;
    cout<<"\n Full name: ";
    cin>>name;
    cout<<"\n Home address: ";
    cin>>email;
    cout<<"\n Telephone number: ";
    cin>>phone;
}
void Customer::getCustomer()
{
    cout<<"Customer Data..."<<endl;
    cout<<" Name: "<<name<<endl;
    cout<<" Home address: "<<email<<endl;
    cout<<" Mobile number: "<<phone<<endl;
}

