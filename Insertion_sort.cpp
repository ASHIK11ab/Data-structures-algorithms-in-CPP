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

void Insertionsort(int array[], int end) {
  int pos;
  for(int outer = 0; outer <= end; outer++) {
    pos = outer;
    while(pos > 0 && array[pos] < array[pos-1]) {
      swap(array[pos], array[pos-1]);
      pos--;
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
  Insertionsort(array, n-1);
  cout<<"\nInsertion sort output: \n";
  display(array, n);
}
