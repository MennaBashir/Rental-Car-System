#ifndef RESERVATION_H
#define RESERVATION_H
#include<iostream>
#include<string>
#include"Car.h"
using namespace std;

class Reservation
{

public:
    int Ncar;
    int Ndays;

    int setDay();
    void getDay();
    int setCar();
    void getCar();



};

#endif // RESERVATION_H
