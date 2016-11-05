//
// Created by thomas on 05.11.16.
//

#ifndef C_KURS_CCIRCLE_H
#define C_KURS_CCIRCLE_H

#include "CGeo.h"
#include "CPointFloat2.h"

class CCircle : public CGeo {
public:
    CCircle(const double);
    CCircle(const double, const double, const double);

private:
    double radius;
    CPointFloat2 *point;
    double GetArea() const;

};


#endif //C_KURS_CCIRCLE_H
