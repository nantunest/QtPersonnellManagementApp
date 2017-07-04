#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

class Employee
{
    enum class CompensationType{HOURLY, MONTHLY};

    public:
        Employee();

        float calc_salary() = 0;

    private:
        QString name_;
        QString SSN_;
        CompensationType compensation_type_;
};

#endif // EMPLOYEE_H
