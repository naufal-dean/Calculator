#ifndef UNREALNUMBEREXCEPTION_H
#define UNREALNUMBEREXCEPTION_H
#include <iostream>
#include "baseException.h"
using namespace std;


class UnrealNumberException : public BaseException {
private:
    double number;
public:
    UnrealNumberException();
    void printMessage();
};
#endif // UNREALEXCEPTION_H
