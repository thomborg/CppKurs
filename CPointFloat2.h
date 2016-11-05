//
// Created by thomas on 05.11.16.
//

#ifndef C_KURS_CPOINTFLOAT_H
#define C_KURS_CPOINTFLOAT_H


#include <iosfwd>

class CPointFloat2 {
public:
    CPointFloat2();
    CPointFloat2(double, double);
    double getX() const;
    double getY() const;
    void setX(const double);
    void setY(const double);

    CPointFloat2 operator+(const CPointFloat2 &) const;
    CPointFloat2 operator-(const CPointFloat2 &) const;

    CPointFloat2 operator*(const double) const;


private:
    double x;
    double y;

    friend CPointFloat2 operator*(const double, const CPointFloat2 &);
};

CPointFloat2 operator*(const double, const CPointFloat2 &);
std::ostream& operator<<(std::ostream& o, const CPointFloat2 &point);



#endif //C_KURS_CPOINTFLOAT_Hexit