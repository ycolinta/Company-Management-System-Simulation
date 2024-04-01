/*
 * Yessica Colin
 * CS2300 Adv. Programming
 * 2/19/2024
 */

#include "FullTime.h"
#include "PartTime.h"
#include "Company.h"
#include "Input_Validation.h"
#include <iostream>
#include <vector>
#include "Testing.cpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void displayMenu() {
    cout << endl;
    cout << "**** Welcome to your Company Management System ****\n"
            "  -- Please select from the following options --\n";
    cout << endl;
    cout << "1. Add a new Full Time Employee" << endl;
    cout << "2. Add a new Part Time Employee" << endl;
    cout << "3. Remove an employee" << endl;
    cout << "4. Display all employees" << endl;
    cout << "5. Launch work" << endl;
    cout << "6. Calculate Company Payroll" << endl;
    cout << "7. Calculate Company Tax" << endl;
    cout << "8. Exit the tool" << endl;
}

int main() {



    int userOption;
    Company company1;

    Training orientation;
    // Every full time employee has to take orientation, which counts as work hours
    orientation.setTitle("Orientation Day");
    orientation.setTrainingHours(8);

    do {
        displayMenu();

        // To clear buffer
        userOption = Input_Validation::obtainInput();

        switch (userOption) {
            case 1: {
                // Add a new Full Time Employee
                FullTime* ftWorker = new (FullTime);

                string firstName = Input_Validation::getValidatedFirstName();
                ftWorker->setFirstName(firstName);
                string lastName = Input_Validation::getValidatedLastName();
                ftWorker->setLastName(lastName);
                int pos = Input_Validation::getValidatedPositionNumber();
                ftWorker->setPositionNumber(pos);
                int hourlyWage = Input_Validation::getValidatedHrWage();
                ftWorker->setHourlyWage(hourlyWage);
                int ageYears = Input_Validation::getValidatedAge();
                ftWorker->setAgeYears(ageYears);

                ftWorker->addTraining(orientation);
                ftWorker->setHours(0);

                company1.addEmployee(ftWorker);

                break;
            }
            case 2: {
                // Add a new Part Time Employee
                PartTime* ptWorker = new (PartTime);

                string firstName = Input_Validation::getValidatedFirstName();
                ptWorker->setFirstName(firstName);
                string lastName = Input_Validation::getValidatedLastName();
                ptWorker->setLastName(lastName);
                int pos = Input_Validation::getValidatedPositionNumber();
                ptWorker->setPositionNumber(pos);
                int hourlyWage = Input_Validation::getValidatedHrWage();
                ptWorker->setHourlyWage(hourlyWage);
                int ageYears = Input_Validation::getValidatedAge();
                ptWorker->setAgeYears(ageYears);

                ptWorker->setHours(0);

                company1.addEmployee(ptWorker);

                break;
            }
            case 3: {
                int numOfEmployees = company1.numberOfEmployees();

                if(numOfEmployees == 0) {
                    cout << "\nATTENTION! There are currently no employee records to remove. \n *** Enter option 1 to add a new employee ***\n";
                }
                else {
                int myNum = Input_Validation::getValidatedPositionNumber();
                if(!company1.checkEmployee(myNum)) {
                    cout << endl;
                    cout << "Employee you entered does not exist in the company\n";
                }
                company1.removeEmployee(myNum);
                }
                break;
            }
            case 4: {
                int numOfEmployees = company1.numberOfEmployees();

                if(numOfEmployees == 0) {
                    cout << "\nATTENTION! There are currently no employee records to display. \n *** Enter option 1 to add a new employee ***\n";
                }
                if(numOfEmployees > 0) {
                    cout << "*********** Displaying All Employee Records ***********" << endl;
                    company1.printEmployees();
                    cout << "*********** Displaying All Employee Records ***********";
                    cout << endl;
                }
                break;
            }
            case 5: {
                int numOfEmployees = company1.numberOfEmployees();
                if(numOfEmployees == 0) {
                    cout << "\nATTENTION! There are currently no employees to begin a launch work. \n *** Enter option 1 to add a new employee ***\n";
                }
                if(numOfEmployees > 0) {
                    /*
                     * Calling override method work() in workMonth();
                     */
                    company1.workMonth();
                    cout << "Launch Work Was Successful: \nThe different Employee types you have entered have worked differently for 1 month" << endl;
                }

                // Output file
                ofstream TrainingTitles("TrainingTitles.txt");
                TrainingTitles << company1.getName();
                TrainingTitles.close();

                 break;
            }
            case 6: {
                 int total = company1.getTotalPayroll();
                cout << "The total payroll for your company is: " << total << endl;
                break;
            }
            case 7: {
                double tax = company1.calculateLocationTax("AZ");
                cout << "The total tax for your company is: " << tax << endl;
                break;
            }
            case 8: {
                cout << "You have exit the system. Thank you!" << endl;
            }
        }
    } while (userOption != 8);

   return 0;
}


