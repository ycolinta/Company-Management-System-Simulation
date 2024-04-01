#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>

using namespace std;

class Employee {
protected:
    int hours;

private:
    string firstName;
    string lastName;
    int positionNumber;
    int hourlyWage;
    int ageYears;

public:
    /* Declare constructors */
    Employee(int, string, string, int, int);
    Employee();

    virtual ~Employee() = default;

    /* Setter */
    void setPositionNumber(int posNum);
    void setFirstName(string firstN);
    void setLastName(string lastN);
    void setHourlyWage(int hrWage);
    void setAgeYears(int ageInYears);

    /* Getters */
    int getPositionNumber() const;
    string getFirstName() const;
    string getLastName() const;
    int getHourlyWage() const;
    int getAgeYears() const;

    void setHours(int hrs);

    // Returns number of hours
    virtual int getHours() const;

    void adjustSalary(int hrs);

    bool assignTraining();

    /* Overload > operator for object comparison */
    friend bool operator > (const Employee& a, const Employee& b) {
        if(a.getHourlyWage() > b.getHourlyWage())
            return true;
        if(a.getHourlyWage() < b.getHourlyWage())
            return false;
    }

    /* Overload insertion operator << */
    friend std::ostream& operator<<(std::ostream& out, const Employee& e) {
        out << "Employee Position Number: " << e.getPositionNumber() <<
        " | " << "Full Name: " << e.getFirstName() + " " + e.getLastName() << " | " << "Hourly wage: " << e.getHourlyWage() << " | " << "Employee Age: " << e.getAgeYears() << endl;
        return out;
    }

    /* virtual method that accumulates the number of hours worked */
    virtual void work() = 0;

    /* virtual method to return int - takes into account training hours for full time only */
    virtual int totalHours() = 0;

    /* virtual method to return a print statement */
    virtual void print() = 0;

    /* MAX_HOURS_MONTH stands for the max hours an employee can work in 1 month */
    static const int MAX_HOURS_MONTH = 460;
    static const int MAX_EVAL_PTS = 100;

};

#endif