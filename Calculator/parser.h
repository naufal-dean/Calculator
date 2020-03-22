#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include <cmath>
#include <QString>

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

class Parser
{
private:
    static int binOperatorHighFinder(const QString &input);
    static bool isLowBinaryOp(QChar input);
    static int binOperatorLowFinder(const QString &input);
    static double roundDouble(double value, int roundedTo);
public:
    static void parser(QString input, long &result);
    static void parser(QString input, double &result, int roundedTo);
};

#endif // PARSER_H
