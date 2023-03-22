# Peahen Garments

Peahen is a famous garment manufacturer. As business has been good this year, they would like to reward all their employees. 

The Salary for an employee consists of a Basic Salary, an amount for Health Insurance, and another for Retirement Benefits.

The reward is a Bonus based on â€œBasic Salaryâ€ and a â€œSales Percentageâ€.

The total salary payable to an employee will be the sum of the Net Salary and the Bonus (please note: Net Salary is the amount after deducting Health Insurance and Retirement Benefits from the Basic Salary). 

The general manager asks you to update the Salary application to meet the new requirement. 

 Write a C++ program using the structure to store Employee details with the following attribute names:  empId as empid, basicSalary as basicsalary, PF as pf, mediclaimAmount as med and salesPercentage as sales.

Set the Bonus amount based on the given table, 

Basic Salary                         Sales Percentage                    Bonus Amount

<= 7000                                        <=10                                        1500

<= 7000                                        >=10                                        3000

>7000 and <=15000                   <=10                                        2000

>7000 and <=15000                   >=10                                        4000

>15000                                         <=10                                        2500

>15000                                         >=10                                        4500

Get the basicSalary, pf amount and mediclaim amount from the user as the input and calculate the netSalary by deducting pf amount and mediclaim amount from the basic salary.

For Example:

Consider basicSalary = 8000, pfAmount = 1800, mediclaim = 800, 

netSalary = basicSalary  - pfAmount - mediclaim;

netSalary = 8000 - 1800 - 800 = 5400;

Use the given user defined methods to calculate the bonus and netSalary.

int calc_NetSalary();

int calc_Bonus();

Note: In case of any negative input, display the message "Unable to Calculate Salary".

Note: Please avoid the usage of exit(0) in your code.  

Sample Input 1:

Enter the employee id

428

Enter the basic salary

5500

Enter the PF amount

550

Enter the mediclaim amount

1203

Enter the sales percentage

8.5

Sample Output 1:

Total Salary with Bonus is $5247

 

Sample Input 2:

Enter the employee id

430

Enter the basic salary

12000

Enter the PF amount

350

Enter the mediclaim amount

650

Enter the sales percentage

10.5

Sample Output 2:

Total Salary with Bonus is $15000
Sample Input 3:
Enter the employee id
123
Enter the basic salary
-50000
Enter the PF amount
1800
Enter the mediclaim amount
5000
Enter the sales percentage
34.0

Sample Output 3:
Unable to Calculate Salary
