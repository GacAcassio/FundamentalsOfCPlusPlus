# Product Details

Rean Grocery wants to automate its billing system. Help the team to develop a C++ program using structures to calculate the total amount of product. 

Create a structure Product with an attributes string name, int quantity, float price. 

Member functions in struct Product:

Product readItem() - This method will read the inputs from the user and set the values to the struct Product. If the quantity or price is zero or negative values, print the message as "Invalid".

void printItem() - This method will print the items as shown in the output with the calculated total amount. The total amount is calculated as the product of quantity and price. 

Note: Please avoid the usage of exit(0) in your code.  

Sample Input 1:

Enter product name: Pen 

Enter price: 5.50 

Enter quantity: 15 

Sample Output 1:

Name: Pen 

Price: 5.5

Quantity: 15 

Total Amount: 82.5


Sample Input 2:

Enter product name: Mobile 

Enter price:-90 

Enter quantity: 15 

Sample Output 2:

Invalid


Sample Input 3:

Enter product name: Mobile 

Enter price: 90 

Enter quantity: 0

Sample Output 3:

Invalid


