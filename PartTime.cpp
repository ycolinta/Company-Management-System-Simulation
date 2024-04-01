/*
 * Yessica Colin
 * CMSS_Project
 * 2/19/2024 
 */

#include "PartTime.h"

using namespace std;

PartTime::PartTime() : Employee(), rating() {
}

bool PartTime::hasRating() const {
    if(getHourlyWage() >= 25){
        return true;
    }else {
        return false;
    }
}

/**
* Effect(s): sets number of hours to a random number between 1 to 4
*/
void PartTime::work()  {
    int hoursAdded = (rand() % 4) + 1;
    hours = hours + hoursAdded;
    setHours(hours);
}


/**
* Effect(s): sets the number of accumulated hours
*            from previous function to here
*/
int PartTime::totalHours() {
    return hours;
}

/**
* Effect(s): prints the different hours of a part-time employee
*/
void PartTime::print() {
    cout << "Part Time Employee hours: " << getHours() << endl;
}
