# Yessica Colin - M2OEP

#### TODOs
Rewrite the README.md file. This is for employers, so make sure you include a summary of the program, language(s) used, which parts of the code were not authored by you, any citations, any installations necessary, etc. If the project included starter code from me, make sure you credit me in your README.md file. Feel free to flex your markdown knowledge with headings, bullet points, lists, tables, etc. You may want to show the README.md file to someone unfamiliar with programming and ask them if it's organized and intuitive to read.
Add a link to this project to your résumé. Make sure it's the full URL and not just a hyperlink (you may be printing this so the employer may not be able to click on it). If you have space, add a short description of the project as well. Use action verbs, bullet points, etc.

1. [Summary](summary)
1. [Design](#design)
1. [Installation](#installation)
1. [Configuration](#configuration)
1. [Upgrade/Maintenance](#upgrade-and-maintenance)
1. [Building](#building)
1. [Configuration Reference](#configuration-reference)

## Summary

This project presents a simulation of a company management system that manages the essential organizational maintenance tasks within a company. The system is ideally used by company admins, such as human resources administrative professionals, to perform different employee-related actions. The program offers different options to the administrative admin through a menu, with each option possessing different functionality, such as adding new employees to the system, obtaining employee payroll, and calculating the company's taxes. 

## Design 

**** Welcome to your Company Management System ****

  -- Please select from the following options --

1. Add a new Full Time Employee
2. Add a new Part Time Employee
3. Remove an employee
4. Display all employees
5. Launch work
6. Calculate Company Payroll
7. Calculate Company Tax
8. Exit the tool

1. Requirements to add a new full-time or part-time employee
   Name of employee 
   Employee’s 5-digit position number
   Employee's hourly wage amount
   Age of employee in years

2.	Remove an employee
   Uses employee’s 5-digit position number to remove 
3.	Display all employees
   Displays all employees that have been entered into the system
4.	Launch work
   This function simulates when employees ‘go to work.’ Currently, the system launches 1-8 random hours per full-time employee and 1-4 random hours for part-time employees. The launch work function is set to
  	simulate a month’s worth of work with maximum hours established for both sets of employees for the entire month. In real life, this can be the real hours an employee submits on their weekly timesheet. The
  	system can set different thresholds of maximum hours accordingly i.e., no overtime or set overtime. 
6.	Calculate Company Payroll
   The system calculates the payroll based on the number of hours each employee has worked and their hourly wage amount. 
6.	Calculate Company Tax
   The system can calculate taxes based on location. For now, it offers two locations: New York and Vermont. 



| Key                  | initrd | boot | runtime |
|----------------------|--------|------|---------|
| ssh_authorized_keys  |        |  x   |    x    |
| write_files          |    x   |  x   |    x    |
| hostname             |    x   |  x   |    x    |
| run_cmd              |        |      |    x    |
| boot_cmd             |        |  x   |         |
| init_cmd             |    x   |      |         |
| k3os.data_sources    |        |      |    x    |
| k3os.modules         |    x   |  x   |    x    |
| k3os.sysctls         |    x   |  x   |    x    |
| k3os.ntp_servers     |        |  x   |    x    |
| k3os.dns_nameservers |        |  x   |    x    |
| k3os.wifi            |        |  x   |    x    |

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
