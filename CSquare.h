//
// Created by thomas on 05.11.16.
//

#ifndef C_KURS_CSQUARE_H
#define C_KURS_CSQUARE_H


#include "CPointFloat2.h"
#include "CGeo.h"

class CSquare : public CGeo {
public:
    CSquare();

    CSquare(CPointFloat2, double);

    enum vertices{A,B,C,D};
private:
    CPointFloat2 &point;
    double length;
};


#endif //C_KURS_CSQUARE_H
