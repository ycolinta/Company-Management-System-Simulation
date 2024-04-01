#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

/* Define constructors */
Employee::Employee() {
}

Employee::Employee(int pNumber, string fName, string lName, int hrWage, int age) {
    positionNumber = pNumber;
    firstName = fName;
    lastName = lName;
    hourlyWage = hrWage;
    ageYears = age;
    // Employees start with 0 hours, and add work hours randomly at work
    hours;
}

void Employee::setPositionNumber(int posNum) {
    positionNumber = posNum;
}

void Employee::setFirstName(string firstN) {
    firstName = firstN;
}

void Employee::setLastName(string lastN) {
    lastName = lastN;
}

void Employee::setHourlyWage(int hrWage) {
    hourlyWage = hrWage;
}

void Employee::setAgeYears(int ageInYears) {
    ageYears = ageInYears;
}

int Employee::getPositionNumber() const {
    return positionNumber;
}

string Employee::getFirstName() const {
    return firstName;
}

string Employee::getLastName() const {
    return lastName;
}

int Employee::getHourlyWage() const {
    return hourlyWage;
}

int Employee::getAgeYears() const {
    return ageYears;
}

int Employee::getHours() const {
    return hours;
}

void Employee::setHours(int hrs) {
  // cout << "Hours coming in: " << hrs << endl;
    if(hrs > MAX_HOURS_MONTH) {
        //cout << firstName << " Maxxed hours. " << "given hours: " << hrs << "MAX hours: " << MAX_HOURS_MONTH << endl;
        hours = MAX_HOURS_MONTH;
    }else if(hrs < 0) {
        hours = 0;
    }
    else{
        hours = hrs;
    }
}



