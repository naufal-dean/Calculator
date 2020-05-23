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

#include "constants/constants.h"

#include <QtDebug>

/*
 * Class untuk melakukan parsing hasil input pada layar kalkulator
 */
class Parser
{
private:
    //! Metode untuk mencari operator binary high priority pertama
    static int binOperatorHighFinder(const QString &input);
    //! Metode untuk mengecek apakah char termasuk operator binary low priority
    static bool isLowBinaryOp(QChar input);
    //! Metode untuk mencari operator binary low priority pertama
    static int binOperatorLowFinder(const QString &input);
    //! Metode untuk rounding double
    static double roundDouble(double value, int roundedTo);

public:
    //! Metode untuk melakukan parsing input long
    static void parser(QString input, long &result);
    //! Metode untuk melakukan parsing input double
    static void parser(QString input, double &result, int roundedTo);
};

#endif // PARSER_H
