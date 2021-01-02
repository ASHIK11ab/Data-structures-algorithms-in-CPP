## Overview
- In this branch we will explore two of the most common searching algorithms implemented in C++

### Linear Search Algorithm  
  1. Start. 

  1. Input the element to be searched. 
  1. Traverse the array, if the element to be found is equal to the element in the array. Then, 
      1. Print element found at index. 
      1. Stop. 
  1. If not, Print element not found. 
  1. Stop. 


### Binary Search Algorithm 
  1. Start.

  1. Get the element to be searched. 
  1. Sort the array. 
  1. Copy the value 0 to found variable. 
  1. Find middle index of the array by dividing (start index + end index) by 2. 
  1. If element to be found is equal to the element at middle index. Then, 
      1. Copy value 1 to found variable. 
      1. Print element found at index. 
      1. Stop. 
  1. If the element to be found is lesser than the element at middle index. Then, Recursively sort left sub array by passing the end index as middle - 1. 
  1. If not, then recursively sort right sub array by passing the start index as middle + 1. 
  1. If found is equal to 0. Then, print element not found. 
  1. Stop.  