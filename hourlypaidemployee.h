#ifndef HOURLYPAIDEMPLOYEE_H
#define HOURLYPAIDEMPLOYEE_H

#include <employee.h>

class HourlyPaidEmployee : public Employee
{
    public:
        HourlyPaidEmployee(QString _name, QString _SSN, float _hourly_compensation, float _done_hours)
            :Employee(_name, _SSN), hourly_compensation_(_hourly_compensation), done_hours_(_done_hours) {}

        float calc_salary() {
            return done_hours_ * hourly_compensation_;
        }

    private:
        float hourly_compensation_;
        float done_hours_;
};

#endif // HOURLYPAIDEMPLOYEE_H
