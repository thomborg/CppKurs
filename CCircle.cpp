//
// Created by thomas on 05.11.16.
//

#include "CCircle.h"
#include <string>
#include <math.h>
#include <cmath>


CCircle::CCircle(double radius) : CGeo("Unit circle") {
    this->point = new CPointFloat2();
    this->radius = radius;
}

CCircle::CCircle(double x, double y, double radius) : CGeo("Unit circle") {
    this->point = new CPointFloat2(x, y);
    this->radius = radius;

}


double CCircle::GetArea() const {
    return std::pow(3.16, 2 ) * this->radius;
}
