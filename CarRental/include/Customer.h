#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include<string>
#include<Admin.h>
using namespace std;


class Customer: public Admin
{
        private:
            string name;
            long phone;

    public:
        string setCustomer();
        void getCustomer();


};

#endif // CUSTOMER_H
