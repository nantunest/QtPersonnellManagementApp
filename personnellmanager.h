#ifndef PERSONNELLMANAGER_H
#define PERSONNELLMANAGER_H

#include <employee.h>
#include <QVector>

class PersonnellManager
{
public:
    PersonnellManager();

private:
    QVector<Employee> employees_;

    void add_employee(Employee new_employee);
    void remove_employee(Employee r_employee);

    QVector<Employee> get_employees();

};

#endif // PERSONNELLMANAGER_H
