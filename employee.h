#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>
#include <QObject>

class Employee
{
    Q_OBJECT

    public:
        Employee(QString _name, QString _SSN)
            : name_(_name), SSN_(_SSN) {}

        virtual float calc_salary() = 0;

        QString ssn() {return SSN_;}

    protected:
        QString name_;
        QString SSN_;

        friend bool operator== (const Employee &e1, const Employee &e2)
        {
            return e1.SSN_ == e2.SSN_;
        }
};

#endif // EMPLOYEE_H
