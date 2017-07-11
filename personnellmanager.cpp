#include "personnellmanager.h"

void PersonnellManager::add_employee(Employee* new_employee)
{
    employees_.append(new_employee);
}

void PersonnellManager::remove_employee(Employee* r_employee)
{
    employees_.removeOne(r_employee);
}

Employee *PersonnellManager::find_employee(QString ssn)
{
    for(auto &eIt : employees_)
        if (eIt->)
}

void PersonnellManager::create_new_employee(QMap<QString, QString> attributes)
{
    if(attributes["type"] == "monthlypaidemployee")
        add_employee(MonthlyPaidEmployee(attributes["name"], attributes["ssn"], attributes["monthly_compensation"]));
    else if(attributes["type"] == "hourlypaidemployee")
        add_employee(HourlyPaidEmployee(attributes["name"], attributes["ssn"], attributes["hourly_compensation"], attributes["done_hours"]));
    else if(attributes["type"] == "salesman")
        add_employee(Salesman(attributes["name"], attributes["ssn"], attributes["monthly_compensation"], attributes["bonus"], attributes["outcome_claim"]));
}

bool PersonnellManager::add_monthlypaid_employee(QString name, QString ssn, float monthly_compensation)
{
    MonthlyPaidEmployee *n_employee = new MonthlyPaidEmployee(name, SSN, monthly_compensation);

    // if employee is unique
    if(! employees_.contains(n_employee)){
        employees_.append(n_employee);
        return true;
    }

    return false;
}

void PersonnellManager::add_hourlypaid_employee(QString name, QString ssn, float hourly_compensation, float done_hours)
{
    HourlyPaidEmployee *n_employee = new HourlyPaidEmployee(name, SSN, hourly_compensation, done_hours);

    // if employee is unique
    if(! employees_.contains(n_employee)){
        employees_.append(n_employee);
        return true;
    }

    return false;
}

void PersonnellManager::add_salesman(QString name, QString SSN, float monthly_compensation, float bonus, bool outcome_claim)
{
    Salesman *n_employee = new Salesman(name, SSN, monthly_compensation, bonus, outcome_claim);

    // if employee is unique
    if(! employees_.contains(n_employee)){
        employees_.append(n_employee);
        return true;
    }

    return false;
}
