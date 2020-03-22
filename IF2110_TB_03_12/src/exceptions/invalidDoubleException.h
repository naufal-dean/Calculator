#ifndef INVALIDDOUBLEEXCEPTION_H
#define INVALIDDOUBLEEXCEPTION_H

#include "baseException.h"

/*
 *  Implementasi Class Excpetion yang akan menghandle apabila
 *  terdapat peletakan koma yang tidak sesuai
 */
class InvalidDoubleException : public BaseException {
public:
    InvalidDoubleException();
};


#endif // INVALIDDOUBLEEXCEPTION_H
