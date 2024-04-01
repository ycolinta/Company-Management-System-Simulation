/*
 * Yessica Colin
 * CMSS_Project
 * 2/19/2024 
 */

#include <iostream>
#include "Training.h"

Training::Training(){};

/* Getters */
string Training::getTitle() const {
    return title;
}

int Training::getTrainingHours() const {
    return trainingHours;
}

/* Setters */
void Training::setTitle(string t) {
    title = t;
}

void Training::setTrainingHours(int tH) {
    trainingHours = tH;
}

// Print to file
