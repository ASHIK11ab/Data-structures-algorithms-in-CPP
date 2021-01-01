## Sorting Algorithms
- In this branch we will explore some of the most common sorting algorithms implemented in C++.

| Table of contents |
| ----------------- |
| - [Bubble Sort](#bubble-sort-algorithm) |
| - [Selection Sort](#selection-sort-algorithm) |
| - [Insertion Sort](#insertion-sort-algorithm) |
| - [Merge Sort](#merge-sort-algorithm) |
| - [Quick Sort](#quick-sort-algorithm) |
| - [Radix Sort](#radix-sort-algorithm) |
 
<br>
<table>
  <thead>
    <tr>
      <th>Table of Contents</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>
        <a href="#bubble-sort-algorithm">
          1. Bubble Sort
        </a>
      </td>
    </tr>
    <tr>
      <td>
        <a href="#selection-sort-algorithm">
          2. Selection Sort
        </a>
      </td>
    </tr>
    <tr>
      <td>
        <a href="#insertion-sort-algorithm">
          3. Insertion Sort
        </a>
      </td>
    </tr>
    <tr>
      <td>
        <a href="#merge-sort-algorithm">
          4. Merge Sort
        </a>
      </td>
    </tr>
    <tr>
      <td>
        <a href="#quick-sort-algorithm">
          5. Quick Sort
        </a>
      </td>
    </tr>
    <tr>
      <td>
        <a href="#radix-sort-algorithm">
          6. Radix Sort
        </a>
      </td>
    </tr>
  </tbody>
</table>

### Bubble Sort Algorithm
  1. Start.  

  1. Run the outer loop from 0 till end of the array-1. 
  1. Run the inner loop from outer+1 till the end of array. 
  1. If the element at inner index is lesser than or equal to element at outer index, then swap both the elements. Repeat until outer loop ends. 
  1. Stop. 

### Selection Sort Algorithm
  1. Start. 

  1. Run the outer loop from 0 till end of array-1. 
      1. Copy the value of outer index to a variable named min_pos. 
  1. Run the inner loop from outer+1 till end of array. 
      1. If the element at inner index is lesser or equal to element at outer index, then copy the inner index to min_pos variable. 
  1. After the inner loop ends, swap the element at outer index and the element at min_pos index. 
  1. Stop. 

### Insertion Sort Algorithm
  1. Start. 

  1. Run the outer loop from 0 to end of the array.   
      1. During each iteration copy the outer loop index to a variable named pos. 
  1. Run another loop until pos is greater than 0 and element at pos index is lesser than or equal to element at pos-1 index, if so then, 
      1. Swap element at pos index with element at pos-1 index.
      1. Decrement pos by 1. 
  1. Stop.

### Merge Sort Algorithm 
  1. Start. 

  1. If start index of array is lesser than or equal to end index of array. 
      1. Find middle index by (start index + end index) divided by 2.
      1. Recursively sort left half of the array by passing end as mid. 
      1. Recursively sort the right half of the array by passing start as mid + 1. 
      1. After the two recursive calls end, then merge the two sub arrays. 
          1. If left half is empty. Then, add right half elements to the array. 
          1. If not, if right half is empty. Then add left half elements to the array. 
          1. If not, if element at left half if it is lesser or equal to the element at right half. Then add left half element and increment left half index.
          1. If not, add element in right half and increment right half index. 
  1. Stop. 

### Quick Sort Algorithm 
  1. Start. 

  1. Find the index of first largest element greater than the pivot (last element of the array) scanned from left and store it in a variable named fle_index. 
  1. Run a loop from fle_index + 1 till end of array. 
  1. If the element at loop variable index is lesser than or equal to the pivot element. Then, 
      1. Swap the element at loop variable index with the element at fle_index. 
      1. Increment fle_index by 1. 
  1. After the loop ends swap the pivot element with the element at fle_index. 
  1. Recursively sort the left half by passing the end index as fle_index -1. 
  1. Recursively sort the right half by passing the star index as fle_index + 1. 
  1. Stop. 

### Radix Sort Algorithm 
  1. Start. 

  1. Create a queue to hold the array items. 
  1. Find the no of digits of the greatest element in the array.
  1. Run an outer loop from 0 till no of digits of the greatest 
  element. 
  1. Run an inner loop from 0 till end of array. 
      1. During each iteration take the respective element (i.e ones place during first iteration, tens place during second iteration of the outer loop and so on.) and place it in the respective queue. 
  1. When inner loop ends traverse the queue from top to bottom and from left to right and place the elements back in the array. Repeat this until outer loop ends. 
  1. Stop. 

