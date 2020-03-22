#ifndef BASEEXCEPTION_H
#define BASEEXCEPTION_H

#include <QString>

class BaseException {
private:
    QString message;
public:
    BaseException(QString message);
    QString getMessage();
};


#endif // BASEEXCEPTION_H
