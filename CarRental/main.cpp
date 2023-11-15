#include <iostream>
#include"Car.h"
#include"Customer.h"
#include"Reservation.h"
#include"Admin.h"
#include"Invoice.h"
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;
HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
void change_color(int m)
{
    if(m==1)
        SetConsoleTextAttribute(cout_handle,15);
    if(m==2)
        SetConsoleTextAttribute(cout_handle,6);
    if(m==3)
        SetConsoleTextAttribute(cout_handle,3);
    if(m==4)
        SetConsoleTextAttribute(cout_handle,2);
    if(m==5)
        SetConsoleTextAttribute(cout_handle,15);
}

int main()
{
    change_color(1);
    Admin op;
    Car op1;
    Reservation op2;
    float a,b,c,d,e,f,g;//price for each car
    long a1,b1,c1,d1,e1,f1,g1;//number available for all car
    cout<<"\n\n\t\t\t^^^^^^^^^^^^^^^^^^^^"<<endl;
    cout<<"\t\t\t Car Rental System "<<endl;
    cout<<"\t\t\t********************"<<endl;

    char x;
    cout<<"Are You right admin (y or n)?";
    cin>>x;
    system("cls");
    if(x=='y'|| x=='Y')
    {
        op.stAdmin();
        system("cls");
        change_color(2);
        cout<<"\n\nEnter the rental price for each car and the available number..."<<endl;
        cout<<"\n   2020 Hyundai Kona"<<endl;
        cout<<" price: ";
        cin>>a;
        cout<<"\n Number available: ";
        cin>>a1;
        cout<<"===================";
        cout<<"\n   2023 Ford Escape"<<endl;
        cout<<" price: ";
        cin>>b;
        cout<<"\n Number available: ";
        cin>>b1;
        cout<<"===================";
        cout<<"\n   2022 Toyota GR86"<<endl;
        cout<<" price: ";
        cin>>c;
        cout<<"\n Number available: ";
        cin>>c1;
        cout<<"===================";
        cout<<"\n   2017 Jeep Patriot"<<endl;
        cout<<" price: ";
        cin>>d;
        cout<<"\n Number available: ";
        cin>>d1;
        cout<<"===================";
        cout<<"\n   2022 Chevrolet  Malibu"<<endl;
        cout<<" price: ";
        cin>>e;
        cout<<"\n Number available: ";
        cin>>e1;
        cout<<"===================";
        cout<<"\n   2023 Mazda CX-5"<<endl;
        cout<<" price: ";
        cin>>f;
        cout<<"\n Number available: ";
        cin>>f1;
        cout<<"===================";
        cout<<"\n   2019 Hyundai Nexo"<<endl;
        cout<<" price: ";
        cin>>g;
        cout<<"\n Number available: ";
        cin>>g1;
        cout<<"===================";

    }
    system("cls");
    ///
    Customer Cp;
    Invoice s1,s2,s3,s4;
    Invoice z1(a);
    Invoice z2(b);
    Invoice z3(c);
    Invoice z4(d);
    Invoice z5(e);
    Invoice z6(f);
    Invoice z7(g);

    char u,u1;
    change_color(3);
    cout<<"\n\nAre you want to add a new customer(y or n)? ";
    cin>>u1;
    system("cls");
    if(u1=='Y'||u1=='y')
    {

        do
        {
            change_color(3);

            cout<<"\nWelcome,dear customer in your company\x03..."<<endl;
            op1.displayCars();
            change_color(4);
            op2.setCar();
            op2.setDay();
            cout<<endl;
            Cp.setCustomer();
            cout<<endl;
            system("cls");
            switch(op2.Ncar)
            {
            case 1:
                change_color(5);
                if(a1>0)
                {
                    cout<<"\tDear customer, your bill\x02"<<endl;
                    Cp.getCustomer();
                    cout<<endl;
                    op2.getCar();
                    cout<<endl;
                    s1=z1*0.001*op2.Ndays; //equation Insurance charge
                    cout<<"\tInsurance Charge: "<<s1.get()<<endl;
                    s2=z1*0.02*op2.Ndays;//equation Rental Charge
                    cout<<"\tRental Charge: "<<s2.get()<<endl;
                    s3=z1*0.05*op2.Ndays;//equation Taxes
                    cout<<"\tTaxes: "<<s3.get()<<endl;
                    s4=s1+s2+s3+a;
                    cout<<"\tTotal amount due is>> "<<s4.get()<<endl;
                    cout<<"\n\t\twe wish you peace\x03..."<<endl;
                    a1--;
                }
                else
                    cout<<"Sorry, this type is not available now!.."<<endl;
                cout<<" press Enter to continue..."<<endl;
                getch();
                system("cls");

                break;
            ///
            case 2:
                change_color(5);

                if(b1>0)
                {
                    cout<<"\tDear customer, your bill\x02"<<endl;
                    Cp.getCustomer();
                    cout<<endl;
                    op2.getCar();
                    cout<<endl;
                    s1=z2*0.001*op2.Ndays; //equation Insurance charge
                    cout<<"\tInsurance Charge: "<<s1.get()<<endl;
                    s2=z2*0.02*op2.Ndays;//equation Rental Charge
                    cout<<"\tRental Charge: "<<s2.get()<<endl;
                    s3=z2*0.05*op2.Ndays;//equation Taxes
                    cout<<"\tTaxes: "<<s3.get()<<endl;
                    s4=s1+s2+s3+b;
                    cout<<"\tTotal amount due is>> "<<s4.get()<<endl;
                    cout<<"\n\t\twe wish you peace\x03..."<<endl;
                    b1--;
                }
                else
                    cout<<"Sorry, this type is not available now!.."<<endl;
                cout<<" press Enter to continue..."<<endl;
                getch();
                system("cls");

                break;
            case 3:
                change_color(5);

                if(c1>0)
                {
                    cout<<"\tDear customer, your bill\x02"<<endl;
                    Cp.getCustomer();
                    cout<<endl;
                    op2.getCar();
                    cout<<endl;
                    s1=z3*0.001*op2.Ndays; //equation Insurance charge
                    cout<<"\tInsurance Charge: "<<s1.get()<<endl;
                    s2=z3*0.02*op2.Ndays;//equation Rental Charge
                    cout<<"\tRental Charge: "<<s2.get()<<endl;
                    s3=z3*0.05*op2.Ndays;//equation Taxes
                    cout<<"\tTaxes: "<<s3.get()<<endl;
                    s4=s1+s2+s3+c;
                    cout<<"\tTotal amount due is>> "<<s4.get()<<endl;
                    cout<<"\n\t\twe wish you peace\x03..."<<endl;
                    c1--;
                }
                else
                    cout<<"Sorry, this type is not available now!.."<<endl;
                cout<<" press Enter to continue..."<<endl;
                getch();
                system("cls");

                break;
            ///
            case 4:
                change_color(5);

                if(d1>0)
                {
                    cout<<"\tDear customer, your bill\x02"<<endl;
                    Cp.getCustomer();
                    cout<<endl;
                    op2.getCar();
                    cout<<endl;
                    s1=z4*0.001*op2.Ndays; //equation Insurance charge
                    cout<<"\tInsurance Charge: "<<s1.get()<<endl;
                    s2=z4*0.02*op2.Ndays;//equation Rental Charge
                    cout<<"\tRental Charge: "<<s2.get()<<endl;
                    s3=z4*0.05*op2.Ndays;//equation Taxes
                    cout<<"\tTaxes: "<<s3.get()<<endl;
                    s4=s1+s2+s3+d;
                    cout<<"\tTotal amount due is>> "<<s4.get()<<endl;
                    cout<<"\n\t\twe wish you peace\x03..."<<endl;
                    d1--;
                }
                else
                    cout<<"Sorry, this type is not available now!.."<<endl;
                cout<<" press Enter to continue..."<<endl;
                getch();
                system("cls");

                break;
            ///
            case 5:
                change_color(5);

                if(e1>0)
                {
                    cout<<"\tDear customer, your bill\x02"<<endl;
                    Cp.getCustomer();
                    cout<<endl;
                    op2.getCar();
                    cout<<endl;
                    s1=z5*0.001*op2.Ndays; //equation Insurance charge
                    cout<<"\tInsurance Charge: "<<s1.get()<<endl;
                    s2=z5*0.02*op2.Ndays;//equation Rental Charge
                    cout<<"\tRental Charge: "<<s2.get()<<endl;
                    s3=z5*0.05*op2.Ndays;//equation Taxes
                    cout<<"\tTaxes: "<<s3.get()<<endl;
                    s4=s1+s2+s3+d;
                    cout<<"\tTotal amount due is>> "<<s4.get()<<endl;
                    cout<<"\n\t\twe wish you peace\x03..."<<endl;
                    e1--;
                }
                else
                    cout<<"Sorry, this type is not available now!.."<<endl;
                cout<<" press Enter to continue..."<<endl;
                getch();
                system("cls");

                break;
            case 6:
                change_color(5);

                if(f1>0)
                {
                    cout<<"\tDear customer, your bill\x02"<<endl;
                    Cp.getCustomer();
                    cout<<endl;
                    op2.getCar();
                    cout<<endl;
                    s1=z6*0.001*op2.Ndays; //equation Insurance charge
                    cout<<"\tInsurance Charge: "<<s1.get()<<endl;
                    s2=z6*0.02*op2.Ndays;//equation Rental Charge
                    cout<<"\tRental Charge: "<<s2.get()<<endl;
                    s3=z6*0.05*op2.Ndays;//equation Taxes
                    cout<<"\tTaxes: "<<s3.get()<<endl;
                    s4=s1+s2+s3+d;
                    cout<<"\tTotal amount due is>> "<<s4.get()<<endl;
                    cout<<"\n\t\twe wish you peace\x03..."<<endl;
                    f1--;
                }
                else
                    cout<<"Sorry, this type is not available now!.."<<endl;
                cout<<" press Enter to continue..."<<endl;
                getch();
                system("cls");
                break;
            case 7:
                change_color(5);

                if(g1>0)
                {
                    cout<<"\tDear customer, your bill\x02"<<endl;
                    Cp.getCustomer();
                    cout<<endl;
                    op2.getCar();
                    cout<<endl;
                    s1=z7*0.001*op2.Ndays; //equation Insurance charge
                    cout<<"\tInsurance Charge: "<<s1.get()<<endl;
                    s2=z7*0.02*op2.Ndays;//equation Rental Charge
                    cout<<"\tRental Charge: "<<s2.get()<<endl;
                    s3=z7*0.05*op2.Ndays;//equation Taxes
                    cout<<"\tTaxes: "<<s3.get()<<endl;
                    s4=s1+s2+s3+d;
                    cout<<"\tTotal amount due is>> "<<s4.get()<<endl;
                    cout<<"\n\t\twe wish you peace\x03..."<<endl;
                    g1--;
                }
                else
                    cout<<"Sorry, this type is not available now!.."<<endl;
                cout<<" press Enter to continue..."<<endl;
                getch();
                system("cls");
                break;
            default:
                cout<<"Please confirm your choice..."<<endl;

            }
            cout<<"\n\nAre you want to add a new customer(y or n)? ";
            cin>>u;
            system("cls");
        }
        while(u=='Y'||u=='y');
    }
    else
        cout<<"\n   We hope that the service has won your admiration, good bye\x03..."<<endl;


    return 0;
}
