#include<iostream>
using namespace std;

void display(int array[], int size) {
  for(int i=0; i<size; ++i)
  cout<<array[i]<<" ";
}

void Linearsearch(int array[], int length, int element)
{ 
  for(int index = 0; index < length; ++index) {
    if(array[index] == element) {
      cout<<endl<<element<<" found at index "<<index;
      return;
    }
  }
  cout<<endl<<"No such element";
}

int main() {
   int size;
   int element;
   char input ='y';
   while(input =='y' || input=='Y') { 
    cout<<"\nEnter size of the array: ";
    cin>>size;
    int array[size];
    cout<<"\nEnter elements of the array: ";
    for(int index = 0; index < size; ++index)
      cin>>array[index];
    cout<<"\nEnter element to be searched: ";
    cin>>element;
    cout<<"\narray is: \n";
    display(array, size);
    Linearsearch(array, size, element);
    cout<<"\nDo you want to continue (y/n): ";
    cin>>input;
  }
}
