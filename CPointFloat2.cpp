//
// Created by thomas on 05.11.16.
//

#include <math.h>
#include <string>
#include <iostream>
#include "CPointFloat2.h"

CPointFloat2::CPointFloat2() {
    this->x = 0;
    this->y = 0;
}
CPointFloat2::CPointFloat2(double x, double y){
    this->x = x;
    this->y = y;
}

double CPointFloat2::getX() const {
    return this->x;
}

double CPointFloat2::getY() const {
    return this->y;
}

void CPointFloat2::setX(double x){
    this->x = x;
}

void CPointFloat2::setY(double y) {
    this->y = y;
}

CPointFloat2 CPointFloat2::operator+(const CPointFloat2 & point) const {
    double x = this->x + point.getX();
    double y = this->y + point.getY();
    return CPointFloat2(x, y);
}

CPointFloat2 CPointFloat2::operator-(const CPointFloat2 & point) const {
    double x = this->x - point.getX();
    double y = this->y - point.getY();
    return CPointFloat2(x, y);
}

CPointFloat2 CPointFloat2::operator*(double skalar) const {
    double x = this->x * skalar;
    double y = this->y * skalar;
    return CPointFloat2(x,y);
}

CPointFloat2 operator*(const double skalar, const CPointFloat2 & point) {
    return CPointFloat2(point.getX() * skalar, point.getY() * skalar);
}


std::ostream& operator<<(std::ostream& o, const CPointFloat2 & point) {
    o << "(" << std::to_string(point.getX()) << ", " << std::to_string(point.getY()) << ")";
}