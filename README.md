## List Using Arrays
- In this branch we will implement the List data structure using arrays implemented in C++.

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
| 9. [Traversal](#traversal) |

### Insertion at begining
1.	Start.

1.	If list is not full. Then,
    1.	Shift all the elements to the right.
    1.	Insert element at index 0.
    1.	Increase size of list by 1.
1.	If list is full. Then print list is full.
1.	Stop

### Insertion at index
1. Start.

1. If list is not full. Then,
    1.	Get the index where the element is to be inserted.
    1.	Check if index is valid. Then,
        1.	Run a loop from end of list to the index -1 and shift the elements to right.
        1.	Insert element at index
        1.	Stop.
    1.	If index is not valid. Print invalid index.
1. If list is full. Then print list is full.
1. Stop.

### Insertion at end
1.	Start.

1.	If list is not full.Then,
    1.	Insert element at end.
    1.	Increment size of list by 1.
1.	If list is full. Then, print list is full.
1.	Stop.

### Deletion at begining
1.	Start.

1.	If list is not empty. Then,
    1.	Print the element at 0 index as deleted.
    1.	Traverse the list from 0 till end and shift elements to the left.
    1.	Decrement size of list by 1.
1.	If list is empty. Then, print list is empty, cannot delete.
1.	Stop.

### Deletion at index
1.	Start.

1.	If list is not empty. Then,
    1.	Get index from user.
    1.	Check if index if valid. If so,
        1.	Traverse the list from index till end.
        1.	Shift elements to left.
        1.	Decrement size of list by 1.
    1.	If index is not valid. Then, print invalid index.
1.	If list is empty. Then, print list is empty, cannot delete.
1.	Stop.

### Deletion at end
1.	Start.

1.	If list is not empty. Then,
    1.	Make the element at last to -1.
    1.	Decrement size of list by 1.
1.	If list is empty. Then, print list is empty, cannot delete.
1.	Stop.

### Delete by value
1.	Start.

1.	If list is not empty. Then,
    1.	Get the element to be deleted.
    1.	Traverse the list from 0 till end of the list.
    1.	If element to be deleted is equal to the element at index in traversal. Then,
        1.	Call delete at index function.
        1.	Return.
    1.	Print element not found.
1.	If list is empty. Then, print list is empty, cannot deleted.
1.	Stop.

### Searching
1.	Start.

1.	Get the element to be searched.
1.	Traverse the array, if the element to be found is equal to the element in the array. Then,
    1.	Print element found at index.
    1.	Stop.
1.	Print element not found.
1.	Stop.

### Traversal
1.	Start.

1.	If list is not empty. Then,
    1.	Traverse the list sequentially and print each element.
1.	If list is empty. Then, print list is empty.
1.	Stop.

<p align="right">
  <a href="https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/tree/searching-algorithms">
    <strong> <--- Prev </strong>
  </a>
</p>
<p align="right">
  <a href="https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/tree/list-using-pointers">
    <strong> Next ---> </strong>
  </a>
</p>

[[Back to top](#list-using-arrays)]

### Contributors:
<a href="https://github.com/ASHIK11ab">
  <img style="border-radius: 50px" src="https://avatars2.githubusercontent.com/u/58099865?s=460&u=dc835e2281a9265edf2b48059f1c8151be89a1b1&v=4" width="70px" height = "70px"> 
</a> 

[Ashik Meeran Mohideen](https://github.com/ASHIK11ab)

&copy; copyrights 2020. All rights reserved.

Licensed under [MIT LICENSE](https://github.com/ASHIK11ab/Data-structures-algorithms-in-CPP/blob/main/LICENSE)