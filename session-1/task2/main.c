
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "node_structures.h"
#include "node.h"
#include "stack_structures.h"
#include "stack.h"

int main( void ) {

    // create an empty stack
    Stack *stack = createStack();

    // push a node
    push(stack,1);

    traverseI(stack->top);  // display the stack

    // free stack memory
    freeNodes( stack->top );
    // free stack
    free(stack);

    return 0;
}


int calculate(operator, operand1, operand2){
    if (operator == "+")
        return operand1 + operand2
    elif (operator == "-")
        return operand1 - operand2
    elif (operator == "*")
        return operand1 * operand2
    elif (operator == "/")
        return operand1 / operand2
    elif (operator == "^") 
        return operand1 ** operand2
}        

#Evaluate an RPN expression 
def postfixEval(expression, Stack *stack):
    char operators = {"+", "-", "*", "/", "^"}
    tokenList = expression.split(" ")
    
    for token in tokenList:
      if token in operators: 
        operand2 = operandStack.pop()
        operand1 = operandStack.pop()
        result = calculate(token,operand1,operand2)
        operandStack.push(result)
      else: #Toke is an Operand
        operandStack.push(float(token))
        
    return operandStack.pop()