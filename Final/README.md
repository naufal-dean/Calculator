# TUGAS BESAR IF2210 - PEMROGRAMAN BERORIENTASI OBJEK 2020

## CALCULATOR

Kelompok 4 / K03 :
1. Vincentius Lienardo / 13518081
2. Muhammad Mirza Fathan Al Arsyad / 13518111
3. Naufal Dean Anugrah / 13518123
4. Muhammad Daffa Dinaya / 13518141

## How to build in windows?
1. We use kits: Desktop Qt 5.13.0 MinGW 64-bit.
2. Open Calculator.pro using QtCreator.
3. Change build mode in bottom left corner to Release.
4. Click build project in bottom left corner.
5. You will get build `build-Calculator-Desktop_Qt_5_13_0_MinGW_64_bit-Release` folder. Go to `release` folder inside this folder.
6. Deploy the Calculator.exe using `windeployqt.exe` in your Qt installation folder (to complete the binary dependencies). Command: `/PATH_TO_WINDEPLOYQT/windeployqt.exe --quick --no-translations .`.
7. Finished, now you can run Calculator.exe.

## How to run in windows?
1. Change the current directory to bin.
2. Run the Calculator.exe.

## File Structure
```
│   README.md
│
├───bin
│   ├───Calculator.exe
│   ...
│
├───docs
│   ├───html
│   │       index.html
│   │       ...
│   └───rtf
│           refman.rtf
│           ...
└───src
    │   .gitignore
    │   Calculator.pro
    │   Calculator.pro.user
    │   main.cpp
    │   mainwindow.cpp
    │   mainwindow.h
    │   parser.cpp
    │   parser.h
    │
    ├───buttons
    │       acButton.cpp
    │       acButton.h
    │       ansButton.cpp
    │       ansButton.h
    │       backspaceButton.cpp
    │       backspaceButton.h
    │       binaryOpButton.cpp
    │       binaryOpButton.h
    │       calcButton.cpp
    │       calcButton.h
    │       commaButton.cpp
    │       commaButton.h
    │       equalButton.cpp
    │       equalButton.h
    │       mcButton.cpp
    │       mcButton.h
    │       mrButton.cpp
    │       mrButton.h
    │       numButton.cpp
    │       numButton.h
    │       opButton.cpp
    │       opButton.h
    │       unaryOpButton.cpp
    │       unaryOpButton.h
    │
    ├───constants
    │       constants.h
    │
    ├───exceptions
    │       baseException.cpp
    │       baseException.h
    │       divisionByZeroException.cpp
    │       divisionByZeroException.h
    │       invalidDoubleException.cpp
    │       invalidDoubleException.h
    │       negativeSqrtException.cpp
    │       negativeSqrtException.h
    │       syntaxErrorException.cpp
    │       syntaxErrorException.h
    │
    ├───expressions
    │       addExpression.h
    │       binaryExpression.h
    │       divideExpression.cpp
    │       divideExpression.h
    │       expression.h
    │       multiplyExpression.h
    │       negativeExpression.h
    │       sqrtExpression.cpp
    │       sqrtExpression.h
    │       substractExpression.h
    │       terminalExpression.h
    │       unaryExpression.h
    │
    └───widgets
            buttonWidget.cpp
            buttonWidget.h
            mainWidget.cpp
            mainWidget.h
            screenWidget.cpp
            screenWidget.h
```
