/*
 * Yessica Colin
 * CS2300 Adv. Programming
 * 2/19/2024
 */

#include <iostream>
#include <memory>
#include <vector>
#include "Company.h"

using namespace std;

Company::Company(){};

void Company::setName(std::string givenName) {
    name = givenName;
}

string Company::getName() const {
    return name;
}

int Company::numberOfEmployees() const {
    return employeeObjs.size();
}


bool Company::checkEmployee(int pos) const {
    bool exists = false;

    for (int i = 0; i < employeeObjs.size(); i++) {
        if (employeeObjs[i]->getPositionNumber() == pos) {
            exists = true;
        }
    }

    return exists;
}


void Company::workDay() const{
    int numOfEmployees = numberOfEmployees();
    for(int i = 0; i < numOfEmployees; i++){
        employeeObjs[i]->work();
    }
}


void Company::workMonth() const{
    for(int i = 0; i < 30; i++){
        workDay();
    }
}

int Company::getTotalPayroll() const {
    int totalPayroll = 0;
    for(int i = 0; i < employeeObjs.size(); i++) {
        // GetHours will turn into GetTotalHours (Full Time Employees also have training hours in that function)
        // For part-time GetTotalHours will just return TotalHours
        int singleSalary = (employeeObjs[i]->totalHours() * employeeObjs[i]->getHourlyWage());
       // cout << "------------------------" << endl;
       // cout << employeeObjs[i]->getHours() << " * " << employeeObjs[i]->getHourlyWage() << " = " << singleSalary << endl;
       // cout << totalPayroll << " + " << singleSalary << ":" << endl;
        totalPayroll = totalPayroll + singleSalary;
       // cout << totalPayroll << endl;
       // cout << "------------------------" << endl;
    }
    return totalPayroll;
}

double Company::calculateLocationTax(string location) const {
    double tax = 0;
    if(location == "VT" || location == "NY"){
        tax = getTotalPayroll() * 0.15;
    }
    else{
        tax = getTotalPayroll() * 0.10;
    }
    return tax;
}

void Company::addEmployee(Employee* newEmployee){
    employeeObjs.push_back(newEmployee);
}



void Company::removeEmployee(int pos) {
    for (int i = 0; i < employeeObjs.size(); i++) {
        if (employeeObjs[i]->getPositionNumber() == pos) {
            employeeObjs.erase(employeeObjs.begin() + i);
            i--;
        }
    }
}

// < operator overload for cout
void Company::printEmployees() {
    for (int i = 0; i < employeeObjs.size(); i++) {
        cout << *employeeObjs[i];
    }
}
