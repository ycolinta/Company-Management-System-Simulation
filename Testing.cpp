/*
 * Yessica Colin
 * CS2300 Adv. Programming
 * 2/19/2024
 */

#include "PartTime.h"
#include "FullTime.h"
#include "Training.h"
#include "Employee.h"
#include <ctime>
#include <iostream>
using namespace std;

/*
bool test_employee();

int main() {
    srand(time(NULL));
    if (test_employee()) {
        cout << "Passed all Employee test cases" << endl;
    }
    return 0;
}

bool test_employee() {
    bool passed = true;
    // Employee is abstract - I can only access it through the child classes - PartTime and FullTime
    PartTime pt;

    int hours = pt.getHours();
    pt.work();
    int hours2 = pt.getHours();

    if (hours2 < hours) {
        passed = false;
        cout << "FAILED virtual work method" << endl;
    }

    FullTime ft;
    ft.work();
    Training tr;
    tr.setTrainingHours(2);

    if(ft.getHours() > ft.totalHours()){
        passed = false;
        cout << "FAILED total hours method" << endl;
    }

    PartTime pt2;
    FullTime ft2;

    pt2.setHours(5);
    ft2.setHours(7);

    if(pt2 > ft2){
        passed = false;
        cout << "FAILED overload operator test" << endl;
    }
    return passed;
   }
*/




