/*
 * Yessica Colin
 * CMSS_Project
 * 2/19/2024 
 */

#ifndef PARTTIME_H
#define PARTTIME_H
#include "Employee.h"
#include <iostream>

class PartTime : public Employee {
public:
    PartTime();

    bool hasRating() const;

    /* virtual method declarations */
    void work() override;
    int totalHours() override;
    void print() override;

private:
    bool rating;
};

#endif
