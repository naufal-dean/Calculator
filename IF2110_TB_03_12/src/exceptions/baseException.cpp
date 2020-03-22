#include "baseException.h"

BaseException::BaseException(QString message) {
    this->message = message;
}

QString BaseException::getMessage() {
    return this->message;
}
