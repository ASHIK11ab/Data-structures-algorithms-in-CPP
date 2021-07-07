## Stack Using Lists

- In this branch we will implement the stack data structure in C++ using Lists.
- Stack follows Last In First Out (LIFO) principle.

| &emsp;&emsp;&emsp;Table of contents |
| --- |
| 1. [Push an element into a stack](#push) |
| 2. [Popping an element from a stack](#pop) |
| 3. [Traversing a stack](#display) |


### PUSH:
> In Stack a new element is always added to the top of the Stack.
1. Start.

1. Create a new node named temp.
1. Get the element to be added to stack in temp->value.
1. Make temp's next point to the top of the stack.
1. Make the top of stack to point to temp.
1. Stop

### POP:
> Always the top element in the Stack is popped.

1. Start.

1. If stack is not empty. Then,
    1. Make a pointer named temp to point to top of the stack.
    1. Make the top of stack to point to its next element.
    1. Delete temp.
1. If stack is empty. Then, print stack is empty, cannot pop.
1. Stop.

### DISPLAY:
1. Start.

1. If stack is not empty. Then,
    1. Traverse the stack from top and print each element.
1. If stack is empty. Then, print stack is empty.

<p align="right">
  <a href="https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/tree/stack-using-arrays">
    <strong> <--- Prev </strong>
  </a>
</p>
<p align="right">
  <a href="https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/tree/queue-using-arrays">
    <strong> Next ---> </strong>
  </a>
</p>

[[Back to top](#stack-using-lists)]

### Contributors:
<a href="https://github.com/ASHIK11ab">
  <img style="border-radius: 50px" src="https://avatars2.githubusercontent.com/u/58099865?s=460&u=dc835e2281a9265edf2b48059f1c8151be89a1b1&v=4" width="70px" height = "70px"> 
</a> 

[Ashik Meeran Mohideen](https://github.com/ASHIK11ab)

&copy; copyrights 2020. All rights reserved.

Licensed under [MIT LICENSE](https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/blob/main/LICENSE)