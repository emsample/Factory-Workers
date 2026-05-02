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
