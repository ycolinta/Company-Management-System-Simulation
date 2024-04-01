/*
 * Yessica Colin
 * CS2300 Adv. Programming
 * 2/19/2024
 */

#ifndef COMPANY_H
#define COMPANY_H
#include "Employee.h"
#include <vector>
#include <string>
#include <memory>

class Company {
private:
    string name;
    double totalPayroll;
    /* Add component field to store Employee objects */
    //vector<unique_ptr<Employee>> employeeObjs;
    vector<Employee*> employeeObjs;
    //vector<unique_ptr<Employee>> employeeObjs;

public:
    /* Constructor */
    Company();

    /* Getters */
    string getName() const;
    int getTotalPayroll() const;

    double calculateLocationTax(string location) const;

    /* Setter */
    void setName(string givenName);

    /* Add an Employee object */
   // void addEmployee(unique_ptr<Employee> newEmployee);
   void addEmployee(Employee* newEmployee);

    /* Remove an Employee by position number */
    void removeEmployee(int pos);

    /* Get the number of Employees */
    int numberOfEmployees() const;

    /* Gets the work ours in for Employees for 1 day */
    void workDay() const;

    /* Gets the work ours in for Employees for 30 day */
    void workMonth() const;

    /* Check if Employee exists */
    bool checkEmployee(int pos) const;

    /* Display all Employees */
    void printEmployees();

};

#endif
