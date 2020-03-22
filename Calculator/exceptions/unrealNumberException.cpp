#include "unrealNumberException.h"
#include "baseException.h"

UnrealNumberException::UnrealNumberException()
{}
void UnrealNumberException::printMessage()
{
    cout << "Bilangan menghasilkan bilangan tidak riil" << endl;
}
