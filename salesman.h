#ifndef SALESMAN_H
#define SALESMAN_H

#include <monthlypaidemployee.h>
#include <QObject>

class Salesman : public MonthlyPaidEmployee
{
    Q_OBJECT
        
        Q_PROPERTY(float realizedOutcome READ realizedOutcome WRITE setrealizedOutcome NOTIFY realizedOutcomeChanged)
        Q_PROPERTY(float outcomeClaim READ outcomeClaim WRITE setOutcomeClaim NOTIFY outcomeClaimChanged)
        Q_PROPERTY(float bonus READ bonus WRITE setBonus NOTIFY bonusChanged)

public:
    Salesman(QString _name, QString _SSN, float _monthly_compensation, float _bonus, bool _outcome_claim)
        : MonthlyPaidEmployee(_name, _SSN, _monthly_compensation), bonus_(_bonus), outcome_claim_(outcome_claim_) {}

    float calc_salary() {

        if (realized_outcome_ >= outcome_claim_)
            return monthly_compensation_ * (1 + bonus_/100);
        else
            return monthly_compensation_;
    }

private:
    float realized_outcome_;
    float outcome_claim_;
    float bonus_;

};

#endif // SALESMAN_H
