#include<iostream>
using namespace std;

struct node {
  char value;
  struct node *next;
};

class Stack {
  struct node *top;
  public:
    Stack() {
      top = NULL;
    }
    void push(char);
    void pop();
    node* getTop();
    char getTopValue();
};

void Stack:: push(char value) {
  struct node *temp = new node;
  temp->value = value;
  temp->next = top;
  top = temp;
}

void Stack:: pop() {
  struct node *temp;
  temp = top;
  top = top->next;
  delete temp;
}

int precedence(char element) {
  if(element == '^')
    return 3;
  if(element == '/' || element == '*')
    return 2;
  if(element == '+' || element == '-')
    return 1;
}

node* Stack:: getTop() {
  return this->top;
}

char Stack:: getTopValue() {
  return (this->top)->value;
}

void infix_to_postfix(char exp[]) {
  Stack stack;
  char postfix[100];
  int pos = 0;
  for(int index = 0; exp[index] != '\0'; ++index) {
    if(exp[index] >= 'a' && exp[index] <='z' || exp[index] >= 'A' && exp[index] <= 'Z') {
      postfix[pos] = exp[index];
      pos++;
    }
    else 
      if(exp[index] == ' ')
        continue;
      else {
        if(exp[index] == '(')
          stack.push(exp[index]);
        else 
          if(exp[index] == ')') {
            while(stack.getTop() != NULL && stack.getTopValue() != '(') {
              postfix[pos] = stack.getTopValue();
              postfix[pos+1] = ' ';
              pos += 2;
              stack.pop();
            }
            stack.pop();
          }
          else {
            if(stack.getTop() == NULL || stack.getTopValue() == '(')
              stack.push(exp[index]);
            else {
              if(precedence(stack.getTopValue()) >= precedence(exp[index])) {
                while(stack.getTop() != NULL && stack.getTopValue() != '(' && precedence(stack.getTopValue()) >= precedence(exp[index])) {
                  postfix[pos] = stack.getTopValue();
                  postfix[pos+1] = ' ';
                  pos += 2;
                  stack.pop();
                }
                stack.push(exp[index]);
              }
              else 
                stack.push(exp[index]);
            }
          }
      }
  }
  while(stack.getTop() != NULL) {
    postfix[pos] = stack.getTopValue();
    postfix[pos+1] = ' ';
    pos += 2;
    stack.pop();
  }
  cout<<"\nInfix expression: ";
  for(int index = 0; exp[index] != '\0'; ++index)
    cout<<exp[index];
  cout<<"\nEquivalent postfix expression: ";
  for(int index = 0; index < pos; ++index)
    cout<<postfix[index];
  cout<<"\n";
}

int main() {
  char exp[100], res = 'y';
  int index = 0;
  cout<<"\nConversion of Infix to Postfix expression:";
  cout<<"\nEnter expression: ";
  cin.getline(exp, 100);
  infix_to_postfix(exp);
}