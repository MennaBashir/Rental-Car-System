#include "Invoice.h"
Invoice::Invoice()
{
}
Invoice::Invoice(double k)
{
    sale=k;
}

double Invoice::get()
{
    return sale;
}
Invoice Invoice::operator*(double k)
{
    double j=sale*k;
    return Invoice(j);
}
Invoice Invoice::operator+(Invoice i)
{
    double l=sale+i.sale;
    return Invoice(l);
}


//

