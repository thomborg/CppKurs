//
// Created by thomas on 05.11.16.
//

#ifndef C_KURS_CSQUARE_H
#define C_KURS_CSQUARE_H


#include "CPointFloat2.h"

class CSquare {
public:
    CSquare();
    CSquare(CPointFloat2, double);
    enum vertices;
private:
    CPointFloat2& point;
    double length;
double xxx;
};


#endif //C_KURS_CSQUARE_H
