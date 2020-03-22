#ifndef DIVISIONBYZERO_H
#define DIVISIONBYZERO_H

#include "baseException.h"

/*
 * Implementasi Class Excpetion yang akan menghandle apabila
 * terdapat pembagian dengan penyebut bilangan nol
 */
class DivisionByZeroException : public BaseException {
public:
    //! Konstruktor Kelas
    DivisionByZeroException();
};

#endif // DIVISIONBYZERO_H
