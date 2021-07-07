## Stack Using Arrays

- In this branch we will implement the stack data structure in C++ using arrays.
- Stack follows Last In First Out (LIFO) principle.

| &emsp;&emsp;&emsp;Table of contents |
| --- |
| 1. [Push an element into a stack](#push) |
| 2. [Popping an element from a stack](#pop) |
| 3. [Traversing a stack](#display) |


### PUSH:
1. Start.

1. If stack is not full. Then,
a.	Shift all the elements to the right.
b.	Insert element at index 0.
c.	Increase size of stack by 1.
1. If stack is full. Then print stack is full.
1. Stop

### POP:
1. Start.

1. If stack is not empty. Then,
    1.	Print the element at 0 index as deleted.

    1.	Traverse the stack from 0 till end and shift elements to the left.
    1.	After traversal ends make the element at index as -1.
d.	Decrement size of stack by 1.
1. If stack is empty. Then, print stack is empty, cannot pop.
1. Stop.

### DISPLAY:
1. Start.

1. If stack is not empty. Then,
    1.	Traverse the stack from top and print each element.
1. If stack is empty. Then, print stack is empty.

<p align="right">
  <a href="https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/tree/singly-linked-list">
    <strong> <--- Prev </strong>
  </a>
</p>
<p align="right">
  <a href="https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/tree/stack-using-lists">
    <strong> Next ---> </strong>
  </a>
</p>

[[Back to top](#stack-using-arrays)]

### Contributors:
<a href="https://github.com/ASHIK11ab">
  <img style="border-radius: 50px" src="https://avatars2.githubusercontent.com/u/58099865?s=460&u=dc835e2281a9265edf2b48059f1c8151be89a1b1&v=4" width="70px" height = "70px"> 
</a> 

[Ashik Meeran Mohideen](https://github.com/ASHIK11ab)

&copy; copyrights 2020. All rights reserved.

Licensed under [MIT LICENSE](https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/blob/main/LICENSE)