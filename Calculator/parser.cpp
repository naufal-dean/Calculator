#include "parser.h"

int Parser::binOperatorHighFinder(const QString &input) {
    int idx = 0;
    while (idx < input.length()) {
        if (input[idx] == BIN_OP_MUL || input[idx] == BIN_OP_DIV) break;
        idx++;
    }
    return idx;
}

bool Parser::isLowBinaryOp(QChar input) {
    return (input == BIN_OP_ADD) || (input == BIN_OP_SUB);
}

int Parser::binOperatorLowFinder(const QString &input) {
    int idx = 0;
    while (idx < input.length() &&
           (!isLowBinaryOp(input[idx]) || input[idx] == UN_OP_MIN)) {
        if (input[idx] == UN_OP_MIN) {
            if (idx == 0) {
                idx++;
            } else { // idx > 0
                if (!input[idx - 1].isDigit()) {
                    idx++;
                } else {
                    return idx;
                }
            }
        } else {
            idx++;
        }
    }
    return idx;
}

void Parser::parser(QString input, long &result) {
    // Zeroth check
    if (!(input[input.length() - 1].isDigit()))
        throw new SyntaxErrorException();

    // process
    int idx = binOperatorLowFinder(input);
    long leftResult, rightResult;
    Expression<double> *expr;
    if (idx != input.length()) { // found
        parser(input.left(idx), leftResult);
        parser(input.mid(idx + 1), rightResult);
        if (input[idx] == BIN_OP_ADD) {
            expr = new AddExpression<double>(new TerminalExpression<double>(leftResult), new TerminalExpression<double>(rightResult));
        } else { // input[idx] == BIN_OP_SUB
            expr = new SubstractExpression<double>(new TerminalExpression<double>(leftResult), new TerminalExpression<double>(rightResult));
        }
        result = expr->solve();
    } else { // not found
        idx = binOperatorHighFinder(input);
        if (idx != input.length()) { // found
            parser(input.left(idx), leftResult);
            parser(input.mid(idx + 1), rightResult);
            if (input[idx] == BIN_OP_MUL) {
                expr = new MultiplyExpression<double>(new TerminalExpression<double>(leftResult), new TerminalExpression<double>(rightResult));
            } else { // input[idx] == BIN_OP_DIV
                expr = new DivideExpression(new TerminalExpression<double>(leftResult), new TerminalExpression<double>(rightResult));
            }
            result = expr->solve();
        } else { // not found, only unary operator
            result = input.toLong();
        }
    }
}

void Parser::parser(QString input, double &result, int roundedTo) {
    // Zeroth check
    if (!(input[input.length() - 1].isDigit()))
        throw new SyntaxErrorException();

    // process
    int idx = binOperatorLowFinder(input);
    double leftResult, rightResult;
    Expression<double> *expr;
    if (idx != input.length()) { // found
        parser(input.left(idx), leftResult, roundedTo);
        parser(input.mid(idx + 1), rightResult, roundedTo);
        if (input[idx] == BIN_OP_ADD) {
            expr = new AddExpression<double>(new TerminalExpression<double>(leftResult), new TerminalExpression<double>(rightResult));
        } else { // input[idx] == BIN_OP_SUB
            expr = new SubstractExpression<double>(new TerminalExpression<double>(leftResult), new TerminalExpression<double>(rightResult));
        }
        result = (int) (expr->solve() * pow(10, roundedTo) + .5);
        result = (double) result / pow(10, roundedTo);
    } else { // not found
        idx = binOperatorHighFinder(input);
        if (idx != input.length()) { // found
            parser(input.left(idx), leftResult, roundedTo);
            parser(input.mid(idx + 1), rightResult, roundedTo);
            if (input[idx] == BIN_OP_MUL) {
                expr = new MultiplyExpression<double>(new TerminalExpression<double>(leftResult), new TerminalExpression<double>(rightResult));
            } else { // input[idx] == BIN_OP_DIV
                expr = new DivideExpression(new TerminalExpression<double>(leftResult), new TerminalExpression<double>(rightResult));
            }
            result = (int) (expr->solve() * pow(10, roundedTo) + .5);
            result = (double) result / pow(10, roundedTo);
        } else { // not found, only unary operator
            // Check double validity and wether any unary operator between digits
            int i = 0, commaCount = 0; bool digitFound = false;
            while (i < input.length()) {
                // Comma count
                if (input[i] == COMMA) {
                    commaCount++;
                    if (commaCount > 1)
                        throw new InvalidDoubleException();
                }
                // Check unary operator
                if (digitFound && (!input[i].isDigit() && input[i] != COMMA))
                    throw new SyntaxErrorException();
                // Check if any digit is found
                if (input[i].isDigit())
                    digitFound = true;
                i++;
            }
            // Process
            if (input[0] == UN_OP_SQRT) {
                // Count sqrt
                int sqrtCount = 0;
                while (input[sqrtCount] == UN_OP_SQRT)
                    sqrtCount++;
                // Build expression
                Expression<double> *expr = new TerminalExpression<double>(input.mid(sqrtCount).toDouble());
                for (int i = 0; i < sqrtCount; i++)
                    expr = new SqrtExpression(expr);
                result = (int) (expr->solve() * pow(10, roundedTo) + .5);
                result = (double) result / pow(10, roundedTo);
            } else {
                result = (int) (input.toDouble() * pow(10, roundedTo) + .5);
                result = (double) result / pow(10, roundedTo);
            }
        }
    }
}
