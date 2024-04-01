/*
 * Yessica Colin
 * CS2300 Adv. Programming
 * 2/19/2024
 */

#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#include <iostream>
#include <string>

using namespace std;

class Input_Validation {

public:

    // To clear int type buffer
    static int obtainInput() {
        int userInput;
        cin >> userInput;
        cin.clear();
        string junk;
        getline(cin, junk);
        return userInput;
    }
    // To clear string type buffer
    static string obtainStringInput() {
        string userInput;
        getline(cin, userInput);
        return userInput;
    }


    static string getValidatedFirstName() {

        string line;

        bool loopFlag = true;

        cout << "Enter first name of employee you wish to enter: ";

        while(loopFlag) {

            bool flag1 = false;
            bool flag2 = false;
            bool flag3 = false;
            bool flag4 = false;


            line = obtainStringInput();

            // Check 1. no digits
            for (int i = 0; i < line.length(); i++) {
                if(isdigit(line[i]) == true) {
                    flag1 = true;
                }
            }

            // Check 2. no special characters, only letters
            for (int i = 0; i < line.length(); i++) {
                if(!((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >='a' && line[i] <= 'z'))) {
                    flag2 = true;
                }
            }

            // Check 3. no more than 1 word
            int lenOfLine = line.length();
            int num_words = 0;
            for(int i = 0; i < lenOfLine; i++) {
                if(line[i] == ' '){
                    num_words++;
                }
            }
            num_words = num_words + 1;
            if(num_words > 1) {
                flag3 = true;
            }

            // Check 4. no input with only 1 character
            if(line.length() == 1) {
                flag4 = true;
            }

            if(flag1 || flag2 || flag3 || flag4) {
                cout << "*Invalid Input*\nEmployee's First Name Requirements: \n-No special characters\n-No numbers\n-No extra spaces\n-No single letters\n-One word only\nPlease try again: ";
            }
            else if(line.length() == 0) {
                cout << "No Input. Enter first name of employee: ";
            }
            else {
                // setting while to false
                loopFlag = false;
            }
        }
        return line;
    }

    /* Validates a first or last name entered.
    * no numbers, no special characters,
    * no single character, one word only */
    static string getValidatedLastName() {

        string line;

        bool loopFlag = true;

        cout << "Enter last name of employee: ";

        while(loopFlag) {

            bool flag1 = false;
            bool flag2 = false;
            bool flag3 = false;
            bool flag4 = false;

            line = obtainStringInput();

            // Check 1. no digits
            for (int i = 0; i < line.length(); i++) {
                if(isdigit(line[i]) == true) {
                    flag1 = true;
                }
            }

            // Check 2. no special characters, only letters
            for (int i = 0; i < line.length(); i++) {
                if(!((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >='a' && line[i] <= 'z'))) {
                    flag2 = true;
                }
            }

            // Check 2. no more than 1 word
            int lenOfLine = line.length();
            int num_words = 0;
            for(int i = 0; i < lenOfLine; i++) {
                if(line[i] == ' ') {
                    num_words++;
                }
            }
            num_words = num_words + 1;
            if(num_words > 1) {
                flag3 = true;
            }

            // Check 4. no input with only 1 character
            if(line.length() == 1) {
                flag4 = true;
            }

            if(flag1 || flag2 || flag3 || flag4) {
                cout << "*Invalid Input*\nEmployee's Last Name Requirements: \n-No special characters\n-No numbers\n-No extra spaces\n-No single letters\n-One word only\nPlease try again: ";
            }

            else if(line.length() == 0) {
                cout << "No Input. Enter last name of employee: ";
            }
            else {
                loopFlag = false;
            }
        }
        return line;
    }

    static int getValidatedPositionNumber() {
        string line;
        bool loopFlag = true;
        int myNum;

        cout << "Enter employee's 5-digit position number: " << endl;

        while (loopFlag) {
            line = obtainStringInput();

            int all_nums = 1;

            if (line.length() == 0) {
                cout << "No Input. Enter employee's 5 digit position number: " << endl;
                continue;
            }

            if (line.length() > 0) {
                for (int i = 0; i < line.length(); i++) {
                    if (!isdigit(line[i])) {
                        all_nums = 0;
                    }
                }
            }

            if (all_nums > 0 && line.length() == 5) {
                myNum = stoi(line);
                return myNum;
            } else {
                cout
                << "*Invalid Input*\nEmployee's 5-digit position number requirements: \n-No characters \n-Must be 5 digits only\nPlease try again: ";
            }
        }
    }

    /* Validates hourly wage number.
    * No special characters, no words,
    * must be a 2-digit number */
    static int getValidatedHrWage() {
        int myNum;
        string line;
        cout << "Enter employee's hourly wage amount: ";
        while(getline(cin, line)) {
            int all_nums = 1;
            int len_size = 0;

            // Checking for no input
            if(line.length() == 0) {
                cout << "No Input. Enter employee's hourly wage amount: ";
                continue;
            }

            if(line.length() > 0) {
                for (int i = 0; i < line.length(); i++) {
                    if (!isdigit(line[i])) {
                        all_nums = 0;
                    }
                }
            }
            // Checking if the conditions are satisfied
            if(all_nums > 0 && (line.length() == 2)) {
                myNum = stoi(line);
                return myNum;
            }else {
                cout << "*Invalid Input*\nEmployee's hourly wage requirements: "
                        "\n-No characters \n-Must be two figures\nPlease try again: ";
            }
        }
    }

    /* Validates age number.
    * No special characters, no words,
    * must be a number in the range of 18-99 */
    static int getValidatedAge() {
        int myAge;
        string line;
        cout << "Enter age of employee in years: ";
        while (getline(cin, line)) {

            int all_nums = 1;

            if (line.length() == 0) {
                cout << "No input. Enter age of employee in years: ";
                continue;
            }
            if(line.length() > 0){
                for (int i = 0; i < line.length(); i++) {
                    if (!isdigit(line[i])) {
                        all_nums = 0;
                    }
                }
            }

            if(all_nums > 0 && line.length() == 2) {
                myAge = stoi(line);
                if(myAge >= 18 && myAge <= 99) {
                    return myAge;
                }
                else {
                    cout << "*Invalid Input*\nEmployee's age requirements: \n-No characters \n-Must not exceed 99\n-Must be an adult\nPlease try again: ";
                }
            }
            else {
                cout << "*Invalid Input*\nEmployee's age requirements: \n-No characters \n-Age must be between 18-99\nPlease try again: ";
            }
        }
    }
};

#endif
