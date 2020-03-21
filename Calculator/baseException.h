#ifndef BASEEXCEPTION_H
#define BASEEXCEPTION_H

template <class T>
class BaseException {
    public:
        // menuliskan pesan kesalahan ke stdout
        virtual void printMessage() = 0;
};

class InvalidNumberException : public BaseException {
    private:
        T number;
    public:
        InvalidNumberException(T number) {
            this->number = number;
        }
        void printMessage() {
            cout << "Bilangan " << number << " tidak valid" << endl;
        }
};

#endif // BASEEXCEPTION_H