#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include <cmath>
#include <QString>

#include "exceptions/baseException.h"
#include "exceptions/undefinedNumberException.h"
#include "exceptions/unrealNumberException.h"
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
#include "exceptions/"

#include <QtDebug>

//#define BIN_OP_ADD "+"
//#define BIN_OP_SUB "-"
//#define BIN_OP_MUL QChar(0x00D7)
//#define BIN_OP_DIV QChar(0x00F7)
//#define UN_OP_MIN "-"

class Parser
{
private:
    static int operatorFinder(QString input) {
        int idx = 0;
        while (idx < input.length() && input[idx].isDigit()) {
            idx++;
        }
        return idx;
    }

    static int operatorFinder(QString input, int startIdx) {
        int idx = startIdx;
        while (idx < input.length() && input[idx].isDigit()) {
            idx++;
        }
        return idx;
    }

public:
    static void parser(QString input, long &result) {
        int idx = operatorFinder(input);
        // Only number
        if (idx == input.length()) {
            result = input.toLong(); return;
        }
        // Not only number
        int precIdx = 0;
        Expression<long> *temp = new TerminalExpression<long>(input.mid(precIdx, idx - precIdx).toLong());
        while (idx != input.length()) {
            precIdx = idx + 1;
            idx = operatorFinder(input, idx + 1);
            long num = input.mid(precIdx, idx - precIdx).toLong();
            // Build expression
            if (input[precIdx - 1] == BIN_OP_ADD)
                temp = new AddExpression<long>(temp, new TerminalExpression<long>(num));
            else if (input[precIdx - 1] == BIN_OP_SUB)
                temp = new SubstractExpression<long>(temp, new TerminalExpression<long>(num));
            else if (input[precIdx - 1] == BIN_OP_MUL)
                temp = new MultiplyExpression<long>(temp, new TerminalExpression<long>(num));
        }

        result = temp->solve();
    }

    static void parser(QString input, double &result, int roundedTo) {
        int idx = operatorFinder(input);
        // Only number
        if (idx == input.length()) {
            result = (int) (input.toDouble() * pow(10, roundedTo) + .5);
            result = (double) result / pow(10, roundedTo);
            return;
        }
        // Not only number
    }
};

#endif // PARSER_H
