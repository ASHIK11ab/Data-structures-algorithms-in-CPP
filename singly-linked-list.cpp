#include<iostream>
using namespace std;

struct node {
  int value;
  struct node* next;
};

class List {
  int no_of_elements;
  struct node* head;
  public:
    List() {
      no_of_elements = 0;
      head = NULL;
    }
    void insert(int);
    void del(int);
    void delval();
    void search();
    void even_ele();
    void odd_ele();
    void even_index();
    void odd_index();
    void sort();
    void reverse();
    void display();
    int get_no_of_elements();
};

void clrscr() {
  system("cls");
}

int List:: get_no_of_elements() {
  return no_of_elements;
}

void List:: sort() {
  if(head == NULL) {
    cout<<"\nList empty !!!";
    return;
  }
  //Bubble sort
  int temp;
  for(struct node* outer = head; outer != NULL; outer = outer->next) {
    for(struct node* inner = outer->next; inner != NULL; inner = inner->next) {
      if(inner->value < outer->value) {
         temp = inner->value;
        inner->value = outer->value;
        outer->value = temp;
      }
    }
  }
  cout<<"\nAfter sorting: \n";
  display();
}

void List:: insert(int pos) {
  if(pos <0 || pos > no_of_elements) {
    cout<<"\nInvalid Position !!!";
    return;
  }
  int val;
  cout<<"\nEnter value: ";
  cin>>val;
  struct node* temp = new node;
  if(temp == NULL) {
    cout<<"\nNo memory !!!";
    exit(0);
  }
  //Insert at begining
  if(pos == 0)
  {
    if(head == NULL) {
      temp->value = val;
      temp->next = NULL;
      head = temp;
    }
    else {
      temp->value = val;
      temp->next = head;
      head = temp;
    }
  }
  else {
    struct node* curr = head;
    //Loops runs from start to the position - 1
    for(int index = 0; index < pos-1; index++) 
      curr = curr->next;
    /*Loop ends.
    We are making temp->next to point to the next node in chain.
    We make curr->next point to the temp which preserves the chain and temp is inserted
    at the proper position.
    */
    temp->value = val;
    temp->next = curr->next;
    curr->next = temp;
  }
  no_of_elements++;
  cout<<"\nAfter Insertion:\n";
  display();
}

void List::del(int pos)
{
  if(pos <0 || pos > no_of_elements) {
    cout<<"\nInvalid Position !!!";
    return;
  }
  if(head == NULL)
  {
    cout<<"\nList is Empty.\nCannot perform deletion !!!";
    return;
  }
  struct node* temp, *curr = head;
  //Delete at begining.
  if(pos == 0)
  {
    temp = head;
    head = head->next;
    delete temp;
  } 
  else {
    for(int index = 0; index < pos-1; ++index, curr = curr->next);
    /*Loop ends one position less than the position of the node to be deleted.
    When loop ends we take the curr->next (which is the node to be deleted) and
    we delete it and we make curr->next to point to the next node of the deleted element.
    */
    temp = curr->next;
    curr->next = (curr->next)->next;
    delete temp;
  }
  no_of_elements--;
  cout<<"\nAfter Deletion:\n";
  display();
}

void List:: delval() {
  if(head == NULL)
  {
    cout<<"\nList is Empty, cannot perform deletion !!!";
    return;
  }
  int value;
  cout<<"\nEnter value: ";
  cin>>value;
  struct node* curr = head;
  //We find the positon of the element to be deleted and we call del(pos).
  for(int index = 0; index < no_of_elements; index++) {
    if(curr->value == value) {
      del(index);
      return;
    }
    curr = curr->next;
  }
  cout<<"\nNo such element to delete !!!";  
}

void List:: even_ele() {
  if(head == NULL) {
    cout<<"\nList empty !!!";
    return;
  }
    cout<<"\nEven elements: \n";
  struct node* temp = head;
  cout<<"---------------------------------------------------------------------\n";
  for(; temp != NULL; temp = temp->next) {
    if(temp->value %2 == 0) {
      cout<<temp->value<<" --> ";
    }
  }
  cout<<"NULL";
  cout<<"\n---------------------------------------------------------------------";
}

void List:: odd_ele() {
  if(head == NULL) {
    cout<<"\nList empty !!!";
    return;
  }
  cout<<"\nOdd elements: \n";
  struct node* temp = head;
  cout<<"----------------------------------------------------------------------\n";
  for(; temp != NULL; temp = temp->next) {
    if(temp->value %2 != 0) {
      cout<<temp->value<<" --> ";
    }
  }
  cout<<"NULL";
  cout<<"\n----------------------------------------------------------------------";
}

void List:: odd_index() {
  if(head == NULL) {
    cout<<"\nList empty !!!";
    return;
  }
  cout<<"\nElements at odd index: \n";
  struct node* temp = head;
  cout<<"----------------------------------------------------------------------\n";
  for(int index = 0; index < no_of_elements; ++index) {
    if(index %2 != 0) {
      cout<<temp->value<<" --> ";
    }
    temp = temp->next;
  }
  cout<<"NULL";
  cout<<"\n----------------------------------------------------------------------";
}

void List:: even_index() {
  if(head == NULL) {
    cout<<"\nList empty !!!";
    return;
  }
  cout<<"\nElements at even index: \n";
  struct node* temp = head;
  cout<<"-----------------------------------------------------------------------\n";
  for(int index = 0; index < no_of_elements; ++index) {
    if(index %2 == 0) {
      cout<<temp->value<<" --> ";
    }
    temp = temp->next;
  }
  cout<<"NULL";
  cout<<"\n-----------------------------------------------------------------------";
}

void List:: reverse() {
  if(head == NULL) {
    cout<<"List is empty.";
    return;
  }
  struct node *curr = head,*next, *prev = NULL;
  /*During each iteration we make the current node next to point to the previous node.
  Then, we make the current node as previous node and next node as current node.
  */
  while(curr != NULL) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  /*After loop ends now our head becomes our prev node (which is the last node in list
  after loop ends, now list is reversed.)*/
  head = prev;
  cout<<"\nAfter reversing: ";
  display();
}

void List:: search() {
  int value;
  cout<<"\nEnter value: ";
  cin>>value;
  struct node* curr = head;
  for(int index = 0; index < no_of_elements; ++index, curr = curr->next) { 
    if(curr->value == value) {
      cout<<"\n"<<value<<" found at "<<index;
      return;
    }
  }
  cout<<"\nNo such element found !!!";
}

void List:: display() {
  if(no_of_elements == 0) {
    cout<<"List is empty.";
    return;
  }
  struct node* curr = head;
  cout<<"-----------------------------------------------------------------------\n";
  cout<<"List is: ";
  for(int index = 0; index < no_of_elements; ++index) {
    cout<<curr->value<<" --> ";
    curr = curr->next;
  }
  cout<<"NULL";
  cout<<endl<<"Size of List: "<<no_of_elements;
  cout<<"\n---------------------------------------------------------------------";
}

int main() {
  List list;
  char res = 'y';
  int choice;
  int pos;
  while(res == 'y' || res=='Y') {
    cout<<"\nMenu: ";
    cout<<"\n1. Insert at begining.";
    cout<<"\t\t2. Insert at position.";
    cout<<"\n3. Insert at End.";
    cout<<"\t\t4. Delete at begining.";
    cout<<"\n5. Delete at position.";
    cout<<"\t\t6. Delete at end.";
    cout<<"\n7. Delete by value.";
    cout<<"\t\t8. Search.";
    cout<<"\n9. Sort.";
    cout<<"\t\t\t10. Reverse.";
    cout<<"\n11. Odd elements.";
    cout<<"\t\t12. Even elements.";
    cout<<"\n13. Odd index elements.";
    cout<<"\t\t14. Even index elements.";
    cout<<"\n15. Display list.";
    cout<<"\nEnter choice: ";
    cin>>choice;
    switch(choice) {
      case 1:
        list.display(); 
        list.insert(0);
        break;
      case 2: 
        cout<<"\nEnter position (index): ";
        cin>>pos;
        list.display();
        list.insert(pos);
        break;
      case 3:
        list.display(); 
        list.insert(list.get_no_of_elements());
        break;
      case 4: 
        list.display();
		    list.del(0);
        break;
      case 5: 
        list.display();
        cout<<"\nEnter position (index): ";
        cin>>pos;
        list.del(pos);
        break;
      case 6: 
        list.display();
        list.del(list.get_no_of_elements()-1);
        break;
      case 7: 
        list.display();
        list.delval();
        break;
      case 8: 
        list.display();
        list.search(); 
        break;
      case 9: 
        list.display();
        list.sort(); 
        break;
      case 10: 
        list.display();
        list.reverse(); 
        break;
      case 11: 
        list.display();
        list.odd_ele(); 
        break;
      case 12: 
        list.display();
        list.even_ele(); 
        break;
      case 13: 
        list.display();
        list.odd_index(); 
        break;
      case 14: 
        list.display();
        list.even_index(); 
        break;
      case 15: 
        list.display();
        break;
      default: cout<<"\nInvalid option.";
    }
    label:
      cout<<"\nDo you want to continue (y/n): ";
      cin>>res;
      if(res != 'n' && res != 'N' && res != 'y' && res != 'Y'){
        cout<<"\nEnter valid input: ";
        goto label;
      }
  }
}