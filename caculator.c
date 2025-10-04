#include "header.h"

/**
* caculator - Executes basic math operations
* 
* @op:		char that indicates math operation executed
* @lhs:		left hand side operand
* @rhs:		right hand side operand
* Return:	addition if op is '+'
*			subtraction if op is '-'
*			multiplication if op is '*'
*			division if op is '/'
*			otherwise, 0.
*/

int calculator(char op, int lhs, int rhs) {
	if (op == '+') 
		return (lhs + rhs);
	if (op == '-') 
		return (lhs - rhs);
	if (op == '*') 
		return (lhs * rhs);
	if (op == '/') 
		return (lhs / rhs);
	return (0);
}