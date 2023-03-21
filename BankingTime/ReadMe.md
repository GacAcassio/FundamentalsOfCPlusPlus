Chocolate Layer Cake Contestâ€™ was conducted by â€˜Top Chef Mastersâ€™. They are in need of an application to find out the time taken to bake the cakes by various participants. Help them by writing a C++ program using Structures.

Constraints:

1. If the end time is less than the start time then display a message "Invalid End Time"

2. Minutes and seconds should be 0 to 60. If not display a message "Invalid Start Time" or "Invalid End Time"

3. Hours should be in 24 hour format. If not display a message "Invalid Start Time" or "Invalid End Time"

Should use the given structure format

struct Time
{
      int hours;
      int minutes;
      int seconds;
};

In the main method, implement the logic to find the time taken to bake the cake and display the output as shown in the sample output.

Note: Please avoid the usage of exit(0) in your code.  


Sample Input 1:

Enter start time [hh mm ss]:

10 30 20

Enter end time [hh mm ss]:

12 30 10

Sample Output 1:
TIME TAKEN: 1:59:50


Sample Input 2:

Enter start time [hh mm ss]:
25 10 00

Sample Output 2:

Invalid Start Time


Sample Input 3:
Enter start time [hh mm ss]:

12 30 30

Enter end time [hh mm ss]:

28 30 20

Sample Output 3:
Invalid End Time


Sample Input 4:
Enter start time [hh mm ss]:

10 30 20

Enter end time [hh mm ss]:
12 20 10

Sample Output 4:
TIME TAKEN: 1:49:50

Sample Input 5:
Enter start time [hh mm ss]:

12 30 30

Enter end time [hh mm ss]:

11 30 20

Sample Output 5:
Invalid End Time
