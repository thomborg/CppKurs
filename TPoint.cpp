//
// Created by thomas on 06.11.16.
//

#include "TPoint.h"

template <class CoordType, int Dimension>
TPoint<CoordType, Dimension>::TPoint() {
    this->dim = Dimension;
    for (int i = 0; i < Dimension; i++) {
        this->koordinaten[i] = 0;
    }
};

template <class CoordType, int Dimension>
TPoint<CoordType, Dimension>::~TPoint() {
    //destruktor
};

template <class CoordType, int Dimension>
int TPoint<CoordType, Dimension>::getDim() {
    return this->dim;
};

template <class CoordType, int Dimension>
CoordType TPoint<CoordType, Dimension>::getLength() const{
    return std::sqrt((std::pow(this->getKoordinaten(0), 2)) +(std::pow(this->getKoordinaten(1), 2)));
}

