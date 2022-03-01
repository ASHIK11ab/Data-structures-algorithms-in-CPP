## Stack Applications

- Stack has numerous applications in real life from using stack to store local variables during program execution to browsers using stack to implement back and forth buttons.
- Here we will look into two of the common applications of stack:

  1. Conversion of Infix to Postfix expression.
  1. Evaluation of Postfix expression.

| &emsp;&emsp;&emsp;Table of contents |
| --- |
| 1. [Infix to Postfix expression](#infix-to-postfix-expression) |
| 2. [Evaluation of Postfix expression](#evaluation-of-postfix-expression) |

### Infix to Postfix expression
- The expressions we write generally are called infix expressions and the computer cannot evaluate the expression directly.
- Therefore the Infix expression is converted to a format which the computer can easily evaluate which is the Postfix expression.
- Now let's see how we can convert and Infix expression to a Postfix expression.

#### Algorithm
1. Start.

1. Scan the expression array until the EOF (\0) is reached.
1. If the scanned character is an operand then add it to the postfix 
expression.
1. If the scanned character is an open bracket <kbd>(</kbd>, then push it into 
the stack.
1. If scanned character is a closed bracket <kbd>)</kbd>. Then,

    &emsp;i. Until top most element in the stack is a open bracket, pop 
all elements in the stack and add it to the postfix expression.

    &emsp;ii. Pop the stack. ( i.e, popping <kbd>(</kbd> ).

1. If the scanned character is an operator. Then,

    &emsp;a. If the stack is <kbd>NULL</kbd> or if the top most element in the stack is 
    an <kbd>(</kbd> then push the operator into the stack.

    &emsp;b. If precedence of the operator in stack is lesser than the 
    scanned operator. Then, push the scanned operator into 
    the stack.

    &emsp;c. If not

    &emsp;&emsp;i. Keep popping elements into the stack and add it to the postfix expression when these three conditions below are satisfied.

    &emsp;&emsp;&emsp;1. Until the precedence of the top most operator in the stack becomes lesser than 
    the precedence of the scanned operator.

    &emsp;&emsp;&emsp;2. Until the stack becomes <kbd>NULL</kbd>.
    
    &emsp;&emsp;&emsp;3. Until the top most element in the stack is an <kbd>(</kbd>. 

    &emsp;&emsp;ii. If any of the conditions is not satisfied then push the scanned operator into the stack.

1. After loop ends, pop all the operators in the stack and add it to 
the postfix expression.
1. Stop.

- The implementation of conversion of Infix to Postfix expression can be [found here.](https://github.com/ASHIK11ab/data-structures-cpp/blob/stack-applications/infix-to-postfix.cpp)

### Evaluation of Postfix expression
- Expressions in the Postfix form are easy to parse for the machines.
- When machines evaluate a Postfix expression there are no issues such as
operator precedence, handling with paranthesis, etc.
- Now, let's see how we can evaluate a Postfix expression.

#### Algorithm
1. Start.

1. Scan the characters in the expression array.
1. If the scanned character is a number then extract the entire number
and push the number into the stack.
1. If the scanned character is a space then, simply ignore it.
> In the expression 'space' is used as a separator to separate two numbers in the expression.
1. If the scanned character is an operand then pop two numbers from 
the stack and perform operation and push the result into the stack.
1. After reaching the end of the expression array, the result of the expression
is at the top most element of the stack. Print it.
1. Stop. 

- The implementation of Evaluation of Postfix expression can be [found here.](https://github.com/ASHIK11ab/data-structures-cpp/blob/stack-applications/postfix-evaluation.cpp)

<p align="right">
  <a href="https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/tree/stack-using-list">
    <strong> <--- Prev </strong>
  </a>
</p>
<p align="right">
  <a href="https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/tree/queue-using-arrays">
    <strong> Next ---> </strong>
  </a>
</p>

[[Back to top](#stack-applications)]

### Maintainer:
<a href="https://www.linkedin.com/in/ashik-meeran-mohideen">
  <img style="border-radius: 50px" src="https://avatars2.githubusercontent.com/u/58099865?s=460&u=dc835e2281a9265edf2b48059f1c8151be89a1b1&v=4" width="70px" height = "70px"> 
</a>

[Ashik Meeran Mohideen](https://www.linkedin.com/in/ashik-meeran-mohideen)

&copy; copyrights 2022. All rights reserved.

Licensed under [MIT LICENSE](https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/blob/main/LICENSE)