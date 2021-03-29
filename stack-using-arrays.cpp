#include<iostream>
using namespace std;
#define max 5

class Stack {
  int array[max];
  int size;
  public:
    Stack() {
      cout<<"\nStack Initialized.";
      size = 0;
      for(int index = 0; index < max; ++index) 
        array[index] = -1;
    }
    void push();
    void pop();
    void display();
};

void Stack:: push() {
  if(size == max) {
    cout<<"\nStack is full !!!";
    return;
  }
  int element;
  cout<<"\nEnter value: ";
  cin>>element;
  for(int index = size; index > 0; --index)
    array[index] = array[index-1];
  // New element is always inserted in top of the stack.
  array[0] = element;
  size++;
  cout<<"\nAfter Push: ";
  display();
}

void Stack:: pop() {
  if(size == 0) {
    cout<<"\nStack is empty !!!";
    return;
  }
  for(int index = 0; index < size-1; ++index)
    array[index] = array[index+1];
  // Always the top most element is popped from the stack.
  array[size-1] = -1;
  size--;
  cout<<"\nAfter pop: ";
  display();
}

void Stack:: display() {
  if(size == 0) {
    cout<<"\nStack is empty !!!";
    return;
  }
  cout<<"\n----------------------------------------------------------------------------\n";
  cout<<"Stack is: \n";
  for(int index = 0; index < size; ++index)
    cout<<array[index]<<" --> ";
  cout<<"NULL";
  cout<<"\nSize of stack is: "<<size;
  cout<<"\n----------------------------------------------------------------------------";
}

int main() {
  Stack stack;
  int choice;
  char res = 'y';
  while(res == 'y' || res == 'Y') {
    cout<<"\nStack using Arrays.";
    cout<<"\nMenu: ";
    cout<<"\n1. Push.";
    cout<<"\n2. Pop";
    cout<<"\n3. Display Stack.";
    cout<<"\nEnter choice: ";
    cin>>choice;
    switch(choice) {
      case 1: stack.display(); 
              stack.push(); 
              break;
      case 2: stack.display(); 
              stack.pop(); 
              break;
      case 3: stack.display(); 
              break;
      default: cout<<"\nInvalid choice.";
    }
    label: 
      cout<<"\nDo you want to continue (y/n): ";
      cin>>res;
      if(res != 'y' && res != 'Y' && res != 'n' && res != 'N') {
        cout<<"Enter valid input: ";
        goto label;
      }
  }
}
