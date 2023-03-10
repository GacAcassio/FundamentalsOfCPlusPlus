# Lucky Number

 Write a program to find the lucky number using the name of the person.

Calculate the value using the table given below, Store this table in a 2-D array(2*26).

A
	

B
	

C
	

D
	

E
	

F
	

G
	

H
	

I
	

J
	

K
	

L
	

M
	

N
	

O
	

P
	

Q
	

R
	

S
	

T
	

U
	

V
	

W
	

X
	

Y
	

Z

1
	

2
	

3
	

4
	

5
	

8
	

3
	

5
	

1
	

1
	

2
	

3
	

4
	

5
	

7
	

8
	

1
	

2
	

3
	

4
	

6
	

6
	

6
	

5
	

1
	

7


Note:

1. The name given as input by the user should be in uppercase only. 

2. No space is allowed in the name given as input by the user.

Note: Please avoid the usage of exit(0) in your code.  

Implement the following method.

Implement â€˜mainâ€™

Method signature, int main()

In this method, get the name as input by the user. Using the given table, implement the logic to find the lucky number.

For example,

1. If the input given is â€˜AARONâ€™ then the output should be displayed as â€˜Your lucky number is:16â€™

Note: By looking at the table, the corresponding numbers for the given input are A- 1, A-1, R-2, O-7, N-5

so 1+1+2+7+5 = 16

2. If the input given is â€˜aaronâ€™ then the output should be displayed as â€˜Invalid nameâ€™.

Note: Lowercase letters are not allowed

3. If the input given is â€˜A ARONâ€™ then the output should be displayed as â€˜Invalid nameâ€™.

Note: Space is not allowed

Sample Input 1:
Enter your name:
SUALY

Sample Output 1:

Your lucky number is:14


Sample Input 2:
Enter your name:
rosh

Sample Output 2:

Invalid name


Sample Input 3:
Enter your name:
ANI34

Sample Output 3:

Invalid name


Sample Input 4:
Enter your name:
jam es

Sample Output 4:

Invalid name
