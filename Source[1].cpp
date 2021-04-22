/*
 * Calculator.cpp
 *
 *  Date: [03/13/2021]
 *  Author: [Mauricio Bautista]
 */

#include <iostream>

using namespace std;
/* Calculator program uses if-else statement
   to itirate after every expression is executed
   and becomes false or ens when user enters n for no*/

int main()                                       //returns some integer at the end of the execution by returning 0 at the end of the program
{
	//char statement[100]                        //not necessary
	double  op1, op2;                            //declare both variables as double instead of integer to use decimals
	char operation;                              //operation varible will store the operators (+ - * /)
	char answer = 'Y';                           //Character variables use single quotes, not double. Missing semicolon
		
	while (answer == 'Y' || answer == 'y')       //set the answer to Y or y                            
	{
		cout << "Enter expression" << endl;  //sytem asks for expression ( 2 + 2 )
		cin >> op1 >> operation >> op2;      //takes users input

		if (operation == '+') {               //checks to see if the operation is addition '+'. Single quotes
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; //Print the expression 
		}
		else if (operation == '-') {              //checks to see if the operation is subtraction '-'
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; //prints the expression
		}
		else if (operation == '*') {              //checks to see if the operation is multiplication '*'
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;//prints the expression// missing semicolon
		}
		else if (operation == '/') {        //checks to see if the operation is division '/'
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;//prints the expression*/
		}
		
		cout << "Do you wish to evaluate another expression? Press y (yes) or n (no) " << endl; //enter 'Y' or 'y' or 'n' or 'No'
		cin >> answer;
		}
	    cout << "Program Finished" << endl; //ends program
	    return 0;
	
}
