#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

class Employee
{
    public:
        Employee(QString _name, QString _SSN)
            : name_(_name), SSN_(_SSN) {}

        float calc_salary() = 0;

    private:
        QString name_;
        QString SSN_;

        friend bool operator== (const Employee &e1, const Employee &e2);
};

#endif // EMPLOYEE_H

bool Employee::operator==(const Employee &e1, const Employee &e2)
{
    return e1.SSN_ == e2.SSN_;
}
