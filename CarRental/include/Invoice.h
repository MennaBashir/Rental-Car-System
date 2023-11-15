#ifndef INVOICE_H
#define INVOICE_H
#include"Reservation.h"

class Invoice
{
private:
     double sale;

public:
    Invoice();
    Invoice(double x);
    double get();
    Invoice operator *(double k);
    Invoice operator +(Invoice i);


};

#endif // INVOICE_H
