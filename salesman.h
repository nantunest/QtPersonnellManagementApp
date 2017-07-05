#ifndef SALESMAN_H
#define SALESMAN_H

#include <monthlypaidemployee.h>

class Salesman : public MonthlyPaidEmployee
{
public:
    Salesman(QString _name, QString _SSN, float _monthly_compensation, float _bonus, bool _outcome_claim)
        : MonthlyPaidEmployee(_name, _SSN, _monthly_compensation) {}

    float calc_salary() {

        if (realized_outcome_ >= outcome_claim_)
            return monthly_compensation_ * (1 + bonus/100);
        else
            return monthly_compensation_;
    }

private:
    float realized_outcome_;
    float outcome_claim_;

};

#endif // SALESMAN_H
