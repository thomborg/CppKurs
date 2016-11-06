#include <iostream>
#include "CCircle.h"
#include "TPoint.h"
#include "TPoint.cpp"

int main() {
   // CGeo *c1 = new CCircle(2.0);
    TPoint<int, 2> *point1 = new TPoint<int, 2>();
  //  TPoint<int, 2> *point2 = new TPoint<int, 2>();
    point1->setKoordinaten(0, 5);
    point1->setKoordinaten(1, 4);
    double length = point1->getLength();
    printf("%f/n", length);

    return 0;
}