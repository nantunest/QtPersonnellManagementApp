#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

class Employee
{
    public:
        Employee(QString _name, QString _SSN, CompensationType _compensation_type)
            : name_(_name), SSN_(_SSN) {}

        float calc_salary() = 0;

    private:
        QString name_;
        QString SSN_;
};

#endif // EMPLOYEE_H
