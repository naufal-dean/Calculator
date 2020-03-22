#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <QString>
#include "exception/baseException.h"
#include "exception/undefinedNumberException.h"
#include "exception/unrealNumberException.h"
#include "expressions/expression.h"
#include "expressions/terminalExpression.h"
#include "expressions/binaryExpression.h"
#include "expressions/unaryExpression.h"
#include "expressions/addExpression.h"
#include "expressions/divideExpression.h"
#include "expressions/multiplyExpression.h"
#include "expressions/substractExpression.h"
#include "expressions/sqrtExpression.h"
#include "expressions/negativeExpression.h"
#include "expressions/absoluteExpression.h"

#include "constants/constants.h"

//#define BIN_OP_ADD "+"
//#define BIN_OP_SUB "-"
//#define BIN_OP_MUL QChar(0x00D7)
//#define BIN_OP_DIV QChar(0x00F7)
//#define UN_OP_MIN "-"

template <class T>
class Parser
{
    public:
        Expression<T> parsing (QString input)
        {
            if (input[0] != BIN_OP_ADD || input[0] != BIN_OP_SUB || input[0] != BIN_OP_MUL || input[0] != BIN_OP_DIV || input[0] != UN_OP_MIN )
            {
                QString inputNum1;
                inputNum1.append(input[0]);
                QString inputNum2 = "";

                QChar token = input[1];
                int i = 1;
                while(token  != BIN_OP_ADD || token  != BIN_OP_SUB || token  != BIN_OP_MUL || token  != BIN_OP_DIV || token  != UN_OP_MIN  )
                {
                    inputNum1.append(token);
                    i++;
                    token = input[i];
                }
                QChar inputOperator;
                inputOperator=input[i];
                i++;
                while(i  < input.size() )
                {
                    inputNum1.append(token);
                    i++;
                    token = input[i];
                }

                TerminalExpression<T>* Num1 = new TerminalExpression<T>((T) inputNum1.toDouble());
                TerminalExpression<T>* Num2 = new TerminalExpression<T>((T) inputNum2.toDouble());

                if (inputOperator == BIN_OP_ADD)
                    return new AddExpression<T>(Num1,Num2);
                else if (inputOperator == BIN_OP_SUB)
                    return new SubstractExpression<T>(Num1,Num2);
                else if (inputOperator == BIN_OP_MUL)
                    return new MultiplyExpression<T>(Num1,Num2);
                else if (inputOperator == BIN_OP_DIV)
                    return new DivideExpression(Num1,Num2);

            }
        }
};
#endif // PARSER_H
