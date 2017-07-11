#ifndef MONTHLYPAIDEMPLOYEE_H
#define MONTHLYPAIDEMPLOYEE_H

#include <employee.h>
#include <QObject>

class MonthlyPaidEmployee : public Employee
{
    Q_OBJECT

    public:
        MonthlyPaidEmployee(QString _name, QString _SSN, float _monthly_compensation)
            : Employee(_name, _SSN), monthly_compensation_(_monthly_compensation) {}

        float calc_salary() {
            return monthly_compensation_;
        }

    protected:
        float monthly_compensation_;
};

#endif // MONTHLYPAIDEMPLOYEE_H
