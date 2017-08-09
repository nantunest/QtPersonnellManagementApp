#ifndef MONTHLYPAIDEMPLOYEE_H
#define MONTHLYPAIDEMPLOYEE_H

#include <employee.h>
#include <QObject>

class MonthlyPaidEmployee : public Employee
{
    Q_OBJECT

    Q_PROPERTY(float monthly_compensation READ monthly_compensation WRITE setmonthly_compensation)

    public:
        MonthlyPaidEmployee(QObject * parent) : Employee(parent) {}
//        MonthlyPaidEmployee(QObject * parent, QString _name, QString _SSN, float _monthly_compensation)
//            : Employee(parent, _name, _SSN), monthly_compensation_(_monthly_compensation) {}

        float calc_salary() {
            return monthly_compensation_;
        }

        float monthly_compensation() const {return monthly_compensation_;}
        void setmonthly_compensation(const float monthly_compensation) {monthly_compensation_ = monthly_compensation; }

    protected:
        float monthly_compensation_;
};

#endif // MONTHLYPAIDEMPLOYEE_H
