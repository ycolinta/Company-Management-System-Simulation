/*
 * Yessica Colin
 * CMSS_Project
 * 2/19/2024 
 */

#ifndef FULLTIME_H
#define FULLTIME_H
#include "Employee.h"
#include "Training.h"

using namespace std;

class FullTime : public Employee {

public:
    /* Constructor */
    FullTime();

    /* Add a Training object */
    void addTraining(Training newTraining);

    /* Remove Training by title */
    void removeTraining(string s);

    /* Display all Trainings */
    void printTrainings();

    /* virtual method declarations */
    void work() override;
    int totalHours() override;
    void print() override;

private:
    /* Add component field to store Training objects */
    vector<Training> trainingObjs;

};

#endif


