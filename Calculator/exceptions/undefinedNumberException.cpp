
#include "baseException.h"
#include "undefinedNumberException.h"

UndefinedNumberException::UndefinedNumberException(){}
void UndefinedNumberException::printMessage()
{
    cout << "Bilangan menghasilkan bilangan tidak terdefinisi" << endl;
}
