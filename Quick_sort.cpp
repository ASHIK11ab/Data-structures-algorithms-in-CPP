#include<iostream>
using namespace std;

void display(int array[], int size) {
  for(int i=0; i<size; ++i)
  cout<<array[i]<<" ";
}

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void Quicksort(int array[], int start, int end, int size) {
  if (start < end) {
    int fle_index;
    /* Finding the first largest element greater than 
      pivot scanned from left. */
    for(int index = start; index <= end; ++ index)
      if (array[index] >= array[end]) {
        fle_index = index;
        break;
      }

    /* Scanning the rest of the elements from the first largest
      element and checking whether it is smaller than the pivot */
    for(int index = fle_index+1; index <= end; ++index) {
      if (array[index] < array[end]) {
        swap(array[index], array[fle_index]);        
        fle_index++;
      }
    }

    // Swapping the first largest element with the pivot element.
    swap(array[fle_index], array[end]);
    Quicksort(array, start, fle_index-1, size);
    Quicksort(array, fle_index+1, end, size);

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
  Quicksort(array, 0, n-1, n); 
  cout<<"\nQuick sort output: \n";
  display(array, n);
}