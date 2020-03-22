#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include <cmath>
#include <QString>

#include "exceptions/baseException.h"
#include "exceptions/undefinedNumberException.h"
#include "exceptions/unrealNumberException.h"
#include "exceptions/syntaxErrorException.h"
#include "exceptions/invalidDoubleException.h"
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

#include <QtDebug>

//#define BIN_OP_ADD "+"
//#define BIN_OP_SUB "-"
//#define BIN_OP_MUL QChar(0x00D7)
//#define BIN_OP_DIV QChar(0x00F7)
//#define UN_OP_MIN "-"

class Parser
{
private:
    static bool isBinaryOp(QChar input) {
        return (input == BIN_OP_ADD) || (input == BIN_OP_DIV) || (input == BIN_OP_MUL) || (input == BIN_OP_SUB);
    }

    static int operatorFinder(QString input) {
        int idx = 0;
        while (idx < input.length() && !isBinaryOp(input[idx])) {
            idx++;
        }
        return idx;
    }

    static int operatorFinder(QString input, int startIdx) {
        int idx = startIdx;
        while (idx < input.length() && !isBinaryOp(input[idx])) {
            idx++;
        }
        return idx;
    }

public:
    static void parser(QString input, long &result) {
        // Zeroth check
        if (!(input[input.length() - 1].isDigit()))
            throw new SyntaxErrorException();

        int idx = operatorFinder(input);
        // Only number
        if (idx == input.length()) {
            result = input.toLong();
            return;
        }

        // Not only number
        int precIdx = 0;

        // Build first expression
        Expression<long> *temp = new TerminalExpression<long>(input.mid(precIdx, idx - precIdx).toLong());

        // Build next expression
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
        qDebug() << "tests";
        // Zeroth check
        if (!(input[input.length() - 1].isDigit()))
            throw new SyntaxErrorException();

        int idx = operatorFinder(input);
        // Only number
        if (idx == input.length()) {
            result = (int) (input.toDouble() * pow(10, roundedTo) + .5);
            result = (double) result / pow(10, roundedTo);
            return;
        }

        // Not only number
        int precIdx = 0;

        // Build first expression
        Expression<double> *temp = new TerminalExpression<double>(input.mid(precIdx, idx - precIdx).toDouble());

        // Build next expression
        while (idx != input.length()) {
            precIdx = idx + 1;
            idx = operatorFinder(input, idx + 1);
            QString numString = input.mid(precIdx, idx - precIdx);
            // Check double validity and wether any unary operator between digits
            int i = 0, commaCount = 0; bool digitFound = false;
            while (i < numString.length()) {
                // Comma count
                if (numString[i] == COMMA) {
                    commaCount++;
                    if (commaCount > 1)
                        throw new InvalidDoubleException();
                }
                // Check unary operator
                if (digitFound && (!numString[i].isDigit() && numString[i] != COMMA))
                    throw new SyntaxErrorException();
                // Check if any digit is found
                if (numString[i].isDigit())
                    digitFound = true;
                i++;
            }
            // Build new expression
            Expression<double> *newExpr;
            if (numString[0].isDigit()) {
                newExpr = new TerminalExpression<double>(numString.toDouble());
            } else {
                if (numString[0] == UN_OP_SQRT) {
                    newExpr = new SqrtExpression(new TerminalExpression<double>(numString.mid(1).toDouble()));
                }
            }

            // Build expression
            if (input[precIdx - 1] == BIN_OP_ADD)
                temp = new AddExpression<double>(temp, newExpr);
            else if (input[precIdx - 1] == BIN_OP_SUB)
                temp = new SubstractExpression<double>(temp, newExpr);
            else if (input[precIdx - 1] == BIN_OP_MUL)
                temp = new MultiplyExpression<double>(temp, newExpr);
            else if (input[precIdx - 1] == BIN_OP_DIV)
                temp = new DivideExpression(temp, newExpr);
        }

        result = (int) (temp->solve() * pow(10, roundedTo) + .5);
        result = (double) result / pow(10, roundedTo);
    }
};

#endif // PARSER_H
