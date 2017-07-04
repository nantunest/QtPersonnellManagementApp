#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

class Employee
{
    enum class CompensationType{HOURLY, MONTHLY};

    public:
        Employee(QString _name, QString _SSN, CompensationType _compensation_type)
            : name_(_name), SSN_(_SSN), compensation_type_(_compensation_type) {}

        float calc_salary() = 0;

    private:
        QString name_;
        QString SSN_;
        CompensationType compensation_type_;
};

#endif // EMPLOYEE_H
