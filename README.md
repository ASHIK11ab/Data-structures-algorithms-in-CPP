## Singly linked list
- In this branch we will implement the List data structure using pointers in C++.

| Table of Contents |
| ----------------- |
| 1. [Insertion at begining](#insertion-at-begining) |
| 2. [Insertion at index](#insertion-at-index) |
| 3. [Insertion at end](#insertion-at-end) |
| 4. [Deletion at begining](#deletion-at-begining) |
| 5. [Deletion at index](#deletion-at-index) |
| 6. [Deletion at end](#deletion-at-end) |
| 7. [Delete by value](#delete-by-value) |
| 8. [Searching](#searching) |
| 9. [Reversing a linked list](#reverse) |
| 10. [Traversal](#traversal) |

### Insertion at begining
1.	Start.

1.	Create a new node temp.
1.	Get the value in temp->value.
1.	Make temp node’s next to point to NULL.
1.	If head is NULL. Then, assign head = temp.
1.	If head is not NULL. Then, 
  1.	Make temp node’s next to point to head.
  1.	Assign head = temp.
1.	Stop


### Insertion at index
1.	Start.

1.	Get the index where the element is to be inserted.
1.	Create a new node temp.
1.	Make temp node’s next point to NULL.
1.	Traverse the list until we reach the index-1.
    1.	Make the temp node’s next to point to current node’s next.
    1.	Make the current node’s next to point to temp.
1.	Stop.


### Insertion at end
1.	Start.

1.	Create a new node temp.
1.	Make temp node’s next to point to NULL.
1.	Traverse the list using a pointer until we reach the end of list.
1.	After reaching the end, Make current node’s next to point to temp node.
1.	Stop.


### Deletion at begining
1.	Start.

1.	If list is not empty. Then,
    1.	Create a pointer temp and point it to head of list.
    1.	Make head to point to head node’s next.
    1.	Delete temp.
1.	If list is empty. Then, print list is empty, cannot delete.
1.	Stop.


### Deletion at index
1.	Start.

1.	If list is not empty. Then,
    1.	Get index from user.
    1.	Check if index if valid. If so,
        1.	Create a pointer temp.
        1.	Start from 0 and traverse the list till index.
        1.	Assign temp as current node’s next.
        1.	Make current node’s next to point to next of current node’s next.
        1.	Delete temp.
  1.	If index is not valid. Then, print invalid index.
1.	If list is empty. Then, print list is empty, cannot delete.
1.	Stop.


### Deletion at end
1.	Start.

1.	If list is not empty. Then,
    1.	Create a pointer temp.
    1.	Traverse the list with a pointer until the current node’s next points to NULL.
    1.	When traversal ends,
        1.	Assing temp as current node.
        1.	Make current node’s next to point to next of current node’s next.
        1.	Delete temp.
1.	If list is empty. Then, print list is empty, cannot delete.
1.	Stop.


### Delete by value
1.	Start.

1.	If list is not empty. Then,
    1.	Get the element to be deleted.
    1.	Traverse the list,
        1.	If node’s value is equal to the element to be deleted then call delete at position.
        1.	Return.
    1.	Print element not found.
1.	If list is empty. Then, print list is empty, cannot deleted.
1.	Stop.


### Searching
1.	Start.

1.	If list is not empty. Then,
    1.	Get the element to be searched.
    1.	Traverse the List, if the element to be found is equal to the element in the array. Then,
        1.	Print element found at index.
        1.	Return.
    1.	Print element not found.
1.	If list is empty. Then, print list is empty cannot delete.
1.	Stop.  

### Reverse
1.	Start. 

1.	If list is not empty. Then,
    1.	Create three pointers prev as NULL, next and curr to point to head of the list.
    1.	Traverse the list.
        1.	Store the next node in next pointer.
        1.	Make the current node’s next to point to prev pointer.
        1.	Make the prev pointer to point to curr node.
        1.	Make the curr node to point to next node.
    1.	Assign head as curr node.
1.	If list is empty. Then print list is empty.
1.	Stop.


### Traversal
1.	Start.

1.	If list is not empty. Then,
    1.	Traverse the list and print each element.
1.	If list is empty. Then, print list is empty.
1.	Stop.


<p align="right">
  <a href="https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/tree/list-using-arrays">
    <strong> <--- Prev </strong>
  </a>
</p>
<p align="right">
  <a href="https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/tree/stack-using-arrays">
    <strong> Next ---> </strong>
  </a>
</p>

[[Back to top](#singly-linked-list)]

### Contributors:
<a href="https://github.com/ASHIK11ab">
  <img style="border-radius: 50px" src="https://avatars2.githubusercontent.com/u/58099865?s=460&u=dc835e2281a9265edf2b48059f1c8151be89a1b1&v=4" width="70px" height = "70px"> 
</a> 

[Ashik Meeran Mohideen](https://github.com/ASHIK11ab)

&copy; copyrights 2020. All rights reserved.

Licensed under [MIT LICENSE](https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/blob/main/LICENSE)