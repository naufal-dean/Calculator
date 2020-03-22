#ifndef SYNTAXERROREXCEPTION_H
#define SYNTAXERROREXCEPTION_H

#include "baseException.h"

/*
 *  Implementasi Class Excpetion yang akan menghandle apabila
 * terdapat penggunaan operator yang tidak sesuai
 */
class SyntaxErrorException : public BaseException {
public:
    SyntaxErrorException(); //! Konstruktor Kelas
};

#endif // SYNTAXERROREXCEPTION_H
