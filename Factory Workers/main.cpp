#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

int main()
{
    cout << "EMPLOYEE CLASS TESTS" << endl;
    Employee e("John Smith", 1001, "01/15/2022");
    e.setName("John Smith");
    e.setEmployeeNumber(1001);
    e.setHireDate("01/15/2022");
    cout << "Testing accessors:" << endl;
    cout << "Name: " << e.getName() << endl;
    cout << "Employee Number: " << e.getEmployeeNumber() << endl;
    cout << "Hire Date: " << e.getHireDate() << endl;
    cout << "Testing printEmployee(): " << endl;
    e.printEmployee();
    cout << "Testing mutators:" << endl;
    cout << "EXPECTED OUTPUT:" << endl;
    cout << "Name: Updated Name\nEmployee Number: 9999\nHire Date: 12/31/2023" << endl;
    e.setName("Updated Name");
    e.setEmployeeNumber(9999);
    e.setHireDate("12/31/2023");
    cout << "OUTPUT: " << endl;
    e.printEmployee();
}