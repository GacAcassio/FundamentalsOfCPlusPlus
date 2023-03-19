# Webinar

Infork Solutions has planned to conduct a webinar session for engineering graduates all over the world.  Students who wish to participate need to register their details on the website by providing their name, roll number and date of birth.  Write a C++ program to create a structure DateOfBirth defined inside the structure Student.  Assign values to and access the nested structure members.

Note: 

1. None of the input values can be negative or zero.

2. Validate the date format. 

     i. date should be >0 and less than or equal to 31

     ii. month should be >0 and less than or equal to 12

     iii. year should be >0

If date format is not valid display the message as "Invalid date"

3. If the roll number is invalid display the message as "Invalid roll number".

Note: Please avoid the usage of exit(0) in your code.  

Sample Input 1:

Enter name: Mike

Enter roll number: 101

Enter Date of Birth [DD MM YY] format: 14 03 92
Sample Output 1:

Name : Mike 

RollNo : 101 

Date of birth : 14/3/92


Sample Input 2:

Enter name: Veena

Enter roll number: -1

Enter Date of Birth [DD MM YY] format: 21 03 95

Sample Output 2:

Invalid roll number

 

Sample Input 3:

Enter name: Sindhu

Enter roll number: 109

Enter Date of Birth [DD MM YY] format: 33 03 95

Sample Output 3:

Invalid date

Sample Input 4:

Enter name: David

Enter roll number: 9084

Enter Date of Birth [DD MM YY] format: -23 11 -95
Sample Output 4:

Invalid date

Sample Input 5:

Enter name: Ronn

Enter roll number: 5980

Enter Date of Birth [DD MM YY] format: 21 10 0

Sample Output 5:

Invalid date
