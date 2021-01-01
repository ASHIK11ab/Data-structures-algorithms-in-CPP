#include<iostream>
using namespace std;

void display(int array[], int size) {
  for(int i=0; i<size; ++i)
  cout<<array[i]<<" ";
}

void Merge(int array[], int start, int middle, int end) {
  // Pointer for left and right sub array.
  int left_pointer = start; 
  int right_pointer = middle+1;

  int index = 0;

  // Array to hold the merged sub array.
  int temporary_array[(end-start)+1];
  
  // Loop runs until both the array elements are merged.
  while (left_pointer <= middle || right_pointer <= end) {

    /* if Left array is empty (i.e: if left array elements 
      are merged) */
    if (left_pointer > middle) {
      temporary_array[index] = array[right_pointer];
      index++;
      right_pointer++;
    } 
    /* if Right array is empty (i.e: if Right array elements
       are merged) */
    else if (right_pointer > end) {
      temporary_array[index] = array[left_pointer];
      index++;
      left_pointer++;
    } 
      else if (array[left_pointer] <= array[right_pointer]) {
          temporary_array[index] = array[left_pointer];
          index++;
          left_pointer++;
      } 
        else {
          temporary_array[index] = array[right_pointer];
          index++;
          right_pointer++;
        }
  }

  // Copying the merged array into the original array.
  int pos = 0;
  for(int i = start; i<=end; ++ i) { 
    array[i] = temporary_array[pos];
    pos++;
  }
}

void Mergesort(int array[], int start, int end, int size) {
  if (start < end) { 
    int middle = (start+end)/2;
    Mergesort(array, start, middle, size);
    Mergesort(array, middle+1, end, size);
    Merge(array, start, middle, end);
  }
}

int main() {
  int n;
  cout<<"Enter size of the array: ";
  cin>>n;
  int array[n];
  cout<<"\nEnter elements of the array:\n";
  for(int i=0; i<n; ++i) 
  cin>>array[i];
  Mergesort(array, 0, n-1, n); 
  cout<<"\nMerge sort output: \n";
  display(array, n);
}