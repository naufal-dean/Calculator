#ifndef NEGATIVESQRTEXCEPTION_H
#define NEGATIVESQRTEXCEPTION_H

#include "baseException.h"

/*
 *  Implementasi Class Excpetion yang akan menghandle apabila
 *  terdapat bilangan negatif dalam akar
 */
class NegativeSqrtException : public BaseException {
public:
    NegativeSqrtException();
};

#endif // NEGATIVESQRTEXCEPTION_H
