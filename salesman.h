#ifndef SALESMAN_H
#define SALESMAN_H

#include <monthlypaidemployee.h>
#include <QObject>

class Salesman : public MonthlyPaidEmployee
{
    Q_OBJECT

    Q_PROPERTY(float realized_outcome READ realized_outcome WRITE setRealized_outcome)
    Q_PROPERTY(float outcome_claim READ outcome_claim WRITE setOutcome_claim)
    Q_PROPERTY(float bonus READ bonus WRITE setBonus)

public:
    Salesman(QObject * parent) : MonthlyPaidEmployee(parent) {}
//    Salesman(QString _name, QString _SSN, float _monthly_compensation, float _bonus, bool _outcome_claim)
//        : MonthlyPaidEmployee(_name, _SSN, _monthly_compensation), bonus_(_bonus), outcome_claim_(outcome_claim_) {}

    float calc_salary() {

        if (realized_outcome_ >= outcome_claim_)
            return monthly_compensation_ * (1 + bonus_/100);
        else
            return monthly_compensation_;
    }

    float realized_outcome() const{ return realized_outcome_; }
    void setRealized_outcome(float realized_outcome){ realized_outcome_ = realized_outcome;}

    float outcome_claim() const{return outcome_claim_;}
    void setOutcome_claim(float outcome_claim){outcome_claim_ = outcome_claim;}

    float bonus() const {return bonus_;}
    void setBonus(float bonus){bonus_ = bonus;}

private:
    float realized_outcome_;
    float outcome_claim_;
    float bonus_;

};

#endif // SALESMAN_H
