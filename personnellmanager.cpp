#include "personnellmanager.h"

PersonnellManager::PersonnellManager()
{

}

void PersonnellManager::add_employee(Employee new_employee)
{
    employees_.append(new_employees);
}

void PersonnellManager::remove_employee(Employee r_employee)
{
    employees_.removeOne(r_employee);
}

void PersonnellManager::create_new_employee(QMap attributes)
{
    // test type
    if(attributes["type"] == "monthlypaidemployee")
        add_employee(MonthlyPaidEmployee(attributes["name"], attributes["ssn"], attributes["monthlycompensation"]));
    else if(attributes["type"] == "hourlypaidemployee")
        add_employee(HourlyPaidEmployee(attributes["name"], attributes["ssn"], attributes["monthlycompensation"]));

}
