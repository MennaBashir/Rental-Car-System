#include "Reservation.h"
int Reservation::setDay()
{
    cout<<"Enter the number of days you want to rent the car: ";
    cin>>Ndays;
    cout<<endl;
}
void Reservation::getDay()
{
    cout<<"Car rental period is>> "<<Ndays<<endl;
}
int Reservation::setCar()
{
    cout<<"Enter the car number suitable for you\x02..."<<endl;
    cin>>Ncar;
}

void Reservation::getCar()
{
    switch (Ncar)
    {
    case 1:
        cout<<"Rented car is:\n\tMake: Hyundai\tModel: Kona\tYear: 2020 "<<endl;
        break;
    case 2:
        cout<<"Rented car is:\n\tMake: Ford\tModel: Escape\tYear: 2023 "<<endl;
        break;
    case 3:
        cout<<"Rented car is:\n\tMake: Toyota\tModel: GR86\tYear: 2022 "<<endl;
        break;
    case 4:
        cout<<"Rented car is:\n\tMake: Jeep\tModel: Patriot\tYear: 2017 "<<endl;
        break;
    case 5:
        cout<<"Rented car is:\n\tMake: Chevrolet\tModel: Malibu\tYear: 2022 "<<endl;
        break;
    case 6:
        cout<<"Rented car is:\n\tMake: Mazda\tModel: CX-5\tYear: 2023 "<<endl;
        break;
    case 7:
        cout<<"Rented car is:\n\tMake: Hyundai\tModel: Nexo\tYear: 2019 "<<endl;
        break;
    default:
        cout<<"This car is not available..!"<<endl;


    }
}


