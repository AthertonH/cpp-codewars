#include <iostream>
#include <math.h>

double square_area(double A) {
    double radius = pow((A*4) / (2*M_PI), 2);
    return round(radius*100)/100;
}