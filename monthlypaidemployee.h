#ifndef MONTHLYPAIDEMPLOYEE_H
#define MONTHLYPAIDEMPLOYEE_H

#include <employee.h>

class MonthlyPaidEmployee : public Employee
{
    public:
        MonthlyPaidEmployee(QString _name, QString _SSN, float _monthly_compensation)
            : Employee(_name, _SSN), monthly_compensation_(_monthly_compensation) {}

        float calc_salary() {
            return monthly_compensation_;
        }

    private:
        float monthly_compensation_;
};

#endif // MONTHLYPAIDEMPLOYEE_H
