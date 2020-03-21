#ifndef BASEEXCEPTION_H
#define BASEEXCEPTION_H

template <class T>
class BaseException {
    public:
        // menuliskan pesan kesalahan ke stdout
        virtual void printMessage() = 0;
};


#endif // BASEEXCEPTION_H
