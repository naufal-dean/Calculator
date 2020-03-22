#ifndef DIVISIONBYZEROEXCEPTION_H
#define DIVISIONBYZEROEXCEPTION_H

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

#endif // DIVISIONBYZEROEXCEPTION_H
