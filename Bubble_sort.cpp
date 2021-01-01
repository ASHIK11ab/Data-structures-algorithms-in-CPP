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

void Bubblesort(int array[], int end) {
  for(int outer = 0; outer <= end; ++outer) {
    for(int inner = outer+1; inner <= end; ++inner) {
      if(array[inner] < array[outer]) 
        swap(array[inner], array[outer]);
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
  Bubblesort(array, n-1); 
  cout<<"\nBubble sort output: \n";
  display(array, n);
}
