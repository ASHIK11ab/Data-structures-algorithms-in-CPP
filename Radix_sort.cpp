#include<iostream>
#include<math.h>
using namespace std;

void display(int array[], int size) {
  for(int i=0; i<size; ++i)
  cout<<array[i]<<" ";
}

int find_max(int array[], int length) {
  int max = 0;
  for(int i=0; i<length; ++i) { 
    if (array[i] > max)
      max = array[i];
  }
  return max;
}

void Radixsort(int array[], int length) {
  int digits = 0;
  int rem;
  int divident;
  int pos;
  int queue[10][length+1];    // Queue to hold the elemnts.
  /* queue_status[i] -> holds the position of the element 
    to be inserted at ith queue. */
  int queue_status[10];
  int max = find_max(array, length+1);

  while (max != 0) {
    digits++;
    max = max/10;
  }

  for (int outer = 0; outer < digits; ++outer) {
    // Clearing the queue_status after each iteration.
    queue_status[10] = { 0 };  
    divident = pow(10, outer);
    for(int index = 0; index <= length; ++index) {
      // Get corresponding digit at each iteration
      rem = (array[index]/divident)%10;
      pos = queue_status[rem];
      queue[rem][pos] = array[index];
      queue_status[rem]+= 1;
    }
    int counter = 0;
    /* Traversing the  queue from top to bottom 
      and from left to right. */
    for (int i = 0; i < 10; ++i) {  
      for (int j = 0; j < queue_status[i]; ++j) {
        array[counter] = queue[i][j];
        counter++;
      }
    } 
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
  Radixsort(array, n-1); 
  cout<<"\nRadix sort output: \n";
  display(array, n);
}
