# String Concatenation

 The authority of XYZ gated residential colony wants its residents' name datum should be stored in the following format - resident's name <space> his/her father's name. Write a program to concatenate the father's name to the resident's name. Validate the given name.

implement â€˜mainâ€™

Method signature, int main()

In the main method, get the resident's names and fathers' name as input by the user.

In this method, implement the logic to concatenate the two strings. Validate the user inputs. The validation should satisfy the given constraints.

Note:

1. The name given as input should contain only alphabets.

2. Space is allowed.

3. The inputs are not valid, if it contains numbers. For such names, display the error message â€˜INVALID NAMEâ€™.

4. If the given inputs are valid and in lowercase, then convert it into uppercase and display the output.
Note: Please avoid the usage of exit(0) in your code.  

Sample Input 1:

Inmate's name : Aron

Inmate's father's name : Terby

Sample Output 1:

ARON TERBY


Sample Input 2:

Inmate's name : Mary Anto

Inmate's father's name : Jose

Sample Output 2:

MARY ANTO JOSE


Sample Input 3:

Inmate's name : Dev12

Inmate's father's name : Terby

Sample Output 3:

INVALID NAME
