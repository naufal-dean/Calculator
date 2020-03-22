#ifndef BASEEXCEPTION_H
#define BASEEXCEPTION_H

#include <QString>

/*
 * Class BaseException : Sebagai dasar dari Exception yang akan
 * digunakan dalam program
 * Masih dalam bentuk Abstract Base Class
 */

class BaseException {
private:
    QString message; //! Member yang digunakan untuk menyimpan message Exception
public:
    //! Konstruktor Kelas
    BaseException(QString message);
    //! Getter Message Exception
    QString getMessage();
};


#endif // BASEEXCEPTION_H
