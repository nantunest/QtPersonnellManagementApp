#ifndef HOURLYPAIDEMPLOYEE_H
#define HOURLYPAIDEMPLOYEE_H

#include <employee.h>

class HourlyPaidEmployee : public Employee
{
    Q_OBJECT

    Q_PROPERTY(float done_hours READ done_hours WRITE setdone_hours)
    Q_PROPERTY(float hourly_compensation READ hourly_compensation WRITE sethourly_compensation)

    public:
        HourlyPaidEmployee(QObject * parent = 0) : Employee(parent) {}
//        HourlyPaidEmployee(QString _name, QString _SSN, float _hourly_compensation, float _done_hours)
//            :Employee(_name, _SSN), hourly_compensation_(_hourly_compensation), done_hours_(_done_hours) {}

        float calc_salary() {
            return done_hours_ * hourly_compensation_;
        }

        float done_hours() const {return done_hours_;}
        void setdone_hours(const float done_hours){done_hours_ = done_hours;}

        float hourly_compensation() const {return hourly_compensation_;}
        void sethourly_compensation(const float hourly_compensation) {hourly_compensation_ = hourly_compensation;}

    private:
        float hourly_compensation_;
        float done_hours_;
};

#endif // HOURLYPAIDEMPLOYEE_H
