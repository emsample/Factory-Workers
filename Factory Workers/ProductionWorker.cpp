#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
using namespace std;

// PRE: none
// POST: shift=1, hourlyPayRate=0
ProductionWorker::ProductionWorker() : Employee()
{
    shift = 1;
    hourlyPayRate = 0.0;
}

// PRE: s is 1 or 2, rate >= 0
// POST: all fields initialized
ProductionWorker::ProductionWorker(string n, int num, string date, int s, double rate)
    : Employee(n, num, date)
{
    shift = s;
    hourlyPayRate = rate;
}



