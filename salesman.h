#ifndef SALESMAN_H
#define SALESMAN_H

#include <employee.h>

class Salesman : public Employee
{
public:
    Salesman(QString _name, QString _SSN, float _monthly_compensation, float _bonus, bool _outcome_claim);
};

#endif // SALESMAN_H
