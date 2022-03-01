#include<iostream>
#include<math.h>
using namespace std;

struct node {
  int value;
  struct node *next;
};

class Stack {
  struct node *top;
  public:
    Stack() {
      top = NULL;
    }
    void push(int);
    void pop();
    int getTopValue();
};

void Stack:: push(int value) {
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

int Stack:: getTopValue() {
  return (this->top)->value;
}

int Operator(char exp) {
  return (exp == '+' || exp == '-' || exp == '/' || exp == '^' || exp == '*')? 1:0;
}

void postfix_evaluation(char exp[]) {
  Stack stack;
  int pos, num, power_factor, first, second;
  for(int index = 0; exp[index] != '\0'; ++index) {
    if(exp[index] == ' ')
      continue;
    else if(Operator(exp[index])) {
      second = stack.getTopValue();
      stack.pop();
      first = stack.getTopValue();
      stack.pop();
      switch(exp[index]) {
        case '+': stack.push(first + second); break;
        case '-': stack.push(first - second); break;
        case '*': stack.push(first * second); break;
        case '/': stack.push(first / second); break;
        case '^': stack.push(pow(first,second)); break;
      }
    }
      else {
        num = 0;
        while(exp[index] != ' ' && !Operator(exp[index])) {
          num = num*10 + int(exp[index] - '0');
          index++;
        }
        index--;
        stack.push(num);
      }
  }
  cout<<"\nExpression is: ";
  for(int index = 0; exp[index] != '\0'; ++index)
    cout<<exp[index];
  cout<<"\nResult: "<<stack.getTopValue()<<endl;
}

int main() {
  char exp[50];
  cout<<"\nEvaluation of Postfix expression:";
  cout<<"\nEnter expression: ";
  cin.getline(exp, 50);
  postfix_evaluation(exp);
}