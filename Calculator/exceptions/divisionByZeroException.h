#ifndef DIVISIONBYZERO_H
#define DIVISIONBYZERO_H

#include "baseException.h"

class DivisionByZeroException : public BaseException {
public:
    DivisionByZeroException();
};

#endif // DIVISIONBYZERO_H
