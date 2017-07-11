#ifndef PERSONNELLMANAGER_H
#define PERSONNELLMANAGER_H

#include <employee.h>
#include <monthlypaidemployee.h>
#include <hourlypaidemployee.h>
#include <QVector>
#include <QMap>

class PersonnellManager
{
    public:
        PersonnellManager();

        void add_employee(Employee new_employee);
        void remove_employee(Employee r_employee);
        QVector<Employee> get_employees();

    public slots:
       void create_new_employee(QMap attributes);

    private:
        QVector<Employee> employees_;


};

#endif // PERSONNELLMANAGER_H
