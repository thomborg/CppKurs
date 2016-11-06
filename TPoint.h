//
// Created by thomas on 06.11.16.
//

#ifndef C_KURS_TPOINT_H
#define C_KURS_TPOINT_H

#include <tgmath.h>

template<class CoordType, int Dimension>
class TPoint {
public:
    TPoint();
    ~TPoint();
    int getDim();
    CoordType getKoordinaten(int pos) const {
        return koordinaten[pos];
    };

    void setKoordinaten(int pos, CoordType val){
        koordinaten[pos] = val;
    }

    CoordType getLength() const;
private:
    CoordType koordinaten[Dimension];
    int dim;

};



#endif //C_KURS_TPOINT_H
