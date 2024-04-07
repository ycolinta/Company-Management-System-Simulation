# Compnay Management System Simulation

1. [Summary of the Program](#summary-of-the-program)
1. [Design](#design)
1. [Installation](#installation)
1. [Future Work](#future-work)

## Summary of the Program

This project presents a simulation of a company management system that manages the essential organizational maintenance tasks within a company. The system is ideally used by company admins, such as human resources administrative professionals, to perform different employee-related actions. The program offers different options to the administrative admin through a menu, with each option possessing different functionality, such as adding new employees to the system, obtaining employee payroll, and calculating the company's taxes. 

## Design 

![image](https://github.com/ycolinta/Company-Management-System-Simulation/assets/145048118/4c692097-4ec1-4780-85cf-0153c4aa4518)

##### 1/2. Requirements to add a new full-time or part-time employee
  * Name of employee
  * Employee’s 5-digit position number
  * Employee's hourly wage amount
  * Age of employee in years

##### 3. Remove an employee
  * Uses employee’s 5-digit position number to remove 
##### 5. Display all employees
  * Displays all employees that have been entered into the system
##### 6. Launch work
  * This function simulates when employees ‘go to work.’ Currently, the system launches 1-8 random hours per full-time employee and 1-4 random hours for part-time employees. The launch work function is set to
  	simulate a month’s worth of work with maximum hours established for both sets of employees for the entire month. In real life, this can be the real hours an employee submits on their weekly timesheet. The
  	system can set different thresholds of maximum hours accordingly i.e., no overtime or set overtime. 
##### 7. Calculate Company Payroll
  * The system calculates the payroll based on the number of hours each employee has worked and their hourly wage amount. 
##### 6. Calculate Company Tax
  * The system can calculate taxes based on location. For now, it offers two locations: New York and Vermont. 

## Installation
This program was developed in C++ only.
Concepts used included:
* Has-A class relationship
* Is-A class relationship
* File input
* Testing

## Future Work 
Future work includes adding more locations to the system when calculating the company's total payroll and, subsequently, taxes. Additionally, a report of taxes can be outputted into a file for the convenience and record-keeping of a company. The program can also generate a report on the trainings that employees take and calculate the costs of all trainings for the company. The program can also expand by including more company types such as seasonal workers. 
