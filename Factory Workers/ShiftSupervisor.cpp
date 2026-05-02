#include <iostream>
#include <iomanip>
#include "ShiftSupervisor.h"
using namespace std;

// PRE: none
// POST: salary=0, bonus=0
ShiftSupervisor::ShiftSupervisor() : Employee()
{
    annualSalary = 0.0;
    annualBonus = 0.0;
}

// PRE: salary >= 0, bonus >= 0
// POST: fields initialized
ShiftSupervisor::ShiftSupervisor(string n, int num, string date, double salary, double bonus)
    : Employee(n, num, date)
{
    annualSalary = salary;
    annualBonus = bonus;
}