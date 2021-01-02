#include<iostream>
using namespace std;

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void display(int array[], int size) {
  for(int i=0; i<size; ++i)
  cout<<array[i]<<" ";
}

void Quicksort(int array[], int start, int end) {
  if (start < end) {
    int fle_index;
    for(int index = start; index <= end; ++ index)
      if (array[index] >= array[end]) {
        fle_index = index;
        break;
      }
    for(int index = fle_index+1; index <= end; ++index) {
      if (array[index] < array[end]) {
        swap(array[index], array[fle_index]);        
        fle_index++;
      }
    }
    swap(array[fle_index], array[end]);
    Quicksort(array, start, fle_index-1);
    Quicksort(array, fle_index+1, end);
  }
}

int Binarysearch(int array[], int start, int end, int element) {
  int ret_status = 0;
  int mid = (start+end)/2;
  if(array[mid] == element) {
    cout<<endl<<element<<" found at index "<<mid;
    return 1;
  }
  else if(element < array[mid]) {
    ret_status = Binarysearch(array, start, mid-1, element);
  } else {
    ret_status = Binarysearch(array, mid+1, end, element);
  }
  return ret_status;
}

int main() {
   int element;
   int size;
   int found;
   char input ='y';
   cout<<"\nBinary search:";
   while(input =='y' || input=='Y') { 
      cout<<"\nEnter size of the array: ";
      cin>>size;
      int array[size];
      cout<<"\nEnter elements of the array: ";
      for(int index = 0; index < size; ++index)
        cin>>array[index];
      cout<<"\nEnter element to be searched: ";
      cin>>element;
      Quicksort(array, 0, size);
      cout<<"\nSorted array is: \n";
      display(array, size); 
      found = Binarysearch(array, 0, size, element);
      if(found == 0)
        cout<<endl<<"No such element";
      cout<<"\nDo you want to continue (y/n): ";
      cin>>input;
   }
}