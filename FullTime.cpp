/*
 * Yessica Colin
 * CS2300 Adv. Programming
 * 2/19/2024
 */

#include <iostream>
#include "FullTime.h"


using namespace std;

FullTime::FullTime() : Employee() {
}


void FullTime::addTraining(Training newTraining) {
    trainingObjs.push_back(newTraining);
}

void FullTime::removeTraining(string s) {
    for (int i = 0; i < trainingObjs.size(); i++) {
        if (trainingObjs[i].getTitle() == s) {
            trainingObjs.erase(trainingObjs.begin() + i);
            i--;
        }
    }
}

// < operator overload for cout
void FullTime::printTrainings() {
    for (int i = 0; i < trainingObjs.size(); i++) {
        cout << trainingObjs[i];

    }
}

/**
* Effect(s): sets number of hours to a random number between 1 to 8
*/
void FullTime::work() {
    int hoursAdded = (rand() % 8) + 1;
    hours = hours + hoursAdded;
    setHours(hours);
}

/**
* Effect(s): sets the number of accumulated hours
*            from previous function to here
*/
int FullTime::totalHours() {
    int trainingHours;
    for(int i = 0; i < trainingObjs.size(); i++){
        trainingHours = trainingObjs[i].getTrainingHours();
    }
    return hours + trainingHours;
}

/**
* Effect(s): prints the different hours of a full-time employee
*/
void FullTime::print() {
    cout << "Full Time Employee hours: " << totalHours() << endl;
}
