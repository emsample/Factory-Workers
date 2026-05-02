#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee()
{
    name = "";
    employeeNumber = 0;
    hireDate = "";
}
Employee::Employee(string n, int num, string date)
{
    name = n;
    employeeNumber = num;
    hireDate = date;
}

// PRE: none
// POST: name updated
void Employee::setName(string n)
{
    name = n;
}

// PRE: num >= 0
// POST: employeeNumber updated
void Employee::setEmployeeNumber(int num)
{
    employeeNumber = num;
}

// PRE: none
// POST: hireDate updated
void Employee::setHireDate(string date)
{
    hireDate = date;
}

