#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>
#include <QObject>

class Employee : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString ssn READ ssn WRITE setSSN)

    public:
        Employee(QObject *parent = 0) : QObject(parent){}
//        Employee(QObject * parent = 0, QString _name, QString _ssn)
//            : QObject(parent), name_(_name), ssn_(_ssn) {}
        virtual ~Employee(){}

        Q_INVOKABLE
        virtual float calc_salary() = 0;

        QString ssn() const {return ssn_;}
        QString name() const {return name_;}

        void setName(const QString &name) { name_ = name; }
        void setSSN(const QString &ssn) { ssn_ = ssn; }

    protected:
        QString name_;
        QString ssn_;

        friend bool operator== (const Employee &e1, const Employee &e2)
        {
            return e1.ssn_ == e2.ssn_;
        }
};

#endif // EMPLOYEE_H
