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

void Selectionsort(int array[], int end) {
  int min_pos;
  for(int outer = 0; outer <= end; outer++) {
    min_pos = outer;
    for(int inner = outer+1; inner <= end; inner++) {
      if (array[inner] < array[min_pos])
        min_pos = inner;
    }
    swap(array[min_pos], array[outer]);
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
  cout<<"\nOriginal array is: \n";
  display(array, n);
  Selectionsort(array, n-1); 
  cout<<"\nSelection sort output:\n";
  display(array, n);
}