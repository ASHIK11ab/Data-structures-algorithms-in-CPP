#include<iostream>
using namespace std;

struct node {
  int value;
  node *next;
};

class Stack {
  struct node *top;
  int size;
  public:
    Stack() {
      cout<<"\nStack initialized.";
      size = 0;
      top = NULL;
    }
    void push();
    void pop();
    void display();
};

// Pushes a element to the top of the stack.
void Stack:: push() {
  int value;
  struct node *temp = new node;
  cout<<"\nEnter value: ";
  cin>>value;
  temp->value = value;
  temp->next = top;
  top = temp;
  size++;
  cout<<"\nAfter push: ";
  display();
}

// Removing the top most element from the stack.
void Stack:: pop() {
  if(top == NULL) {
    cout<<"\nStack is empty. Cannot pop elements !!!";
    return;
  }
  struct node *temp;
  temp = top;
  top = top->next;
  delete temp;
  size--;
  cout<<"\nAfter pop: ";
  display();
}

void Stack:: display() {
  if(top == NULL) {
    cout<<"\nStack is empty. ";
    return;
  }
  struct node *temp;
  cout<<"\n----------------------------------------------------------------------------\n";
  cout<<"Stack is: \n";
  for(temp = top; temp != NULL; temp = temp->next) 
    cout<<temp->value<<" --> ";
  cout<<"NULL";
  cout<<"\nSize of stack is: "<<size;
  cout<<"\n----------------------------------------------------------------------------";
}

int main() {
  cout<<"\nStack using Pointers.";
  Stack stack;
  int choice;
  char res = 'y';
  while(res == 'y' || res == 'Y') {
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
        cout<<"\nEnter valid input: ";
        goto label;
      }
  }
}