# Yessica Colin - M2OEP

#### TODOs
Rewrite the README.md file. This is for employers, so make sure you include a summary of the program, language(s) used, which parts of the code were not authored by you, any citations, any installations necessary, etc. If the project included starter code from me, make sure you credit me in your README.md file. Feel free to flex your markdown knowledge with headings, bullet points, lists, tables, etc. You may want to show the README.md file to someone unfamiliar with programming and ask them if it's organized and intuitive to read.
Add a link to this project to your résumé. Make sure it's the full URL and not just a hyperlink (you may be printing this so the employer may not be able to click on it). If you have space, add a short description of the project as well. Use action verbs, bullet points, etc.

## Brief Description

This project presents a simulation of a company management system that manages the essential organizational maintenance tasks within a company. The system is ideally used by company admins, such as human resources administrative professionals, to perform different employee-related actions. The program offers different options to the administrative admin through a menu, with each option possessing different functionality, such as adding new employees to the system, obtaining employee payroll, and calculating the company's taxes. 

### Company Class

A Company class has been created to hold some of the functionality that was previously in the Main program. The Company class stores Employee objects as components inside Company. 

Company class data members:
* Name (string)
* Total payroll (double)
* Vector of employee objects (Employee)

Company class actions:
* Add a new employee
  * Part Time or Full Time
* Remove an employee
* Display all employees
* Obtain total employee payroll
* Calculate tax from payroll 

### Employee Class

The Employee Class is the component class of Company.

Employee class data members:
* First name (string)
* Last name (string)
* Position number (int)
* Salary (int)
* Age (int)

### Input_Validation Class

The input validation class serves to validate all input correctly based on specified standards. For example, when adding a new employee, the employee management system  requires the following fields to be validated:

* First name – no numbers, no special characters, no single char, one word only
* Last name – no numbers, no special characters, no single char, one word only
* Position number – no special characters, no words, must be a 5-digit number
* Salary – no special characters, no words, must be a 4-6 figure salary
* Age – no special characters, no words, must be a number in the range of 18-99


## List of Module 2 concepts used
* Has-A class relationship
* Is-A class relationship
* File input
* Testing

## No known bugs at the time of submission
* I had problem with the executable of my testing file ;/

## Concepts Used, Future work, and Grade

#### Concepts Used and Grade 

* Main Program: 40 pts
* Testing Program: 5-10 pts
* File Input: 2-5pts
* Style and Documentation: +0 pts
* Video: +0 pts
* Lifespan of Project: +0 pts
* Future Work: +0 pts

The following Has-A or Is-A relationships were used:

* Has-A relationship Class: 20 pts
  * Company and Employee
* Has-A relationship Class: 20 pts
  * Employee and Training 
* Is-A relationship Class: 20 pts
  * Full Time and Employee
* Is-A relationship Class: 20 pts
  * Part Time and Employee
* More Classes: 10 pts
  * Input_Validation class (to only test the input validation)
  
Based on the rubric and the mentioned work I believe I've earned around 130 pts

#### Future Work: 
Future work includes expanding the training class to contain more methods. For example, allow an employee to take a training and do something with their scores that influence a method currently in use. Also outputting that to a file in a good format would be something for the future as well as outputting a company payroll report with taxes. I'd also like to expand on by adding more employee types.
