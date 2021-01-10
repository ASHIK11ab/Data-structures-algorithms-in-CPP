#include<iostream>
#define max 5
using namespace std;

class List {
  int no_of_elements;
  int array[max];
  public:
    List() {
      no_of_elements = 0;
      for(int index=0; index<max; ++index)
        array[index] = -1;
    }
    void insert(int);
    void del(int);
    void delValue();
    void search();
    void display();
    int get_no_of_elements();
};

void clrscr() {
  system("cls");
}

int List:: get_no_of_elements() {
  return no_of_elements;
}

void List:: insert(int pos) {
  /*We implement all insertions (beg, end, pos) in one function.
  The for loop takes care of shifting elements to right to insert value at an index.
  In case of inserting at beg (or) end the loop condition fails at start.
  So, we insert the element at 0 index (or) at end.*/
  if(no_of_elements == max) {
    cout<<"\nList Full !!!";
    return;
  }
  if(pos > no_of_elements || pos < 0) {
    cout<<"\nInvalid Position !!!";
    return;
  }
  int value;
  cout<<"\nEnter value: ";
  cin>>value;
  for(int index = no_of_elements; index > pos; --index)
    array[index] = array[index-1];
  array[pos] = value;
  no_of_elements++;
  cout<<"\nAfter Insertion:";
  display();
}

void List:: display() {
  if(no_of_elements == 0) 
    cout<<"\nList is empty.";
  else {
    cout<<"\nList is:\n";
    for(int index=0; index < no_of_elements; index++) 
      cout<<array[index]<<" --> ";
    cout<<"NULL";
  }
}

void List:: del(int pos) {
  /*We implement deletion (beg, end, pos) in one function.
  We start at pos and shift the elements to left and we assign last element = -1.
  So all deletions are comprehended into one function.
  */
  if(no_of_elements == 0) { 
    cout<<"\nList is empty.";
    return;
  }
  if(pos >= no_of_elements || pos < 0) {
    cout<<"\nInvalid Position !!!";
    return;
  }
  for(int index = pos; index < no_of_elements-1; index++) {
    array[index] = array[index+1];
  }
  array[no_of_elements-1] = -1;
  no_of_elements--;
  cout<<"\nAfter Deletion:\n";
  display();
}

void List:: delValue() {
  /*In delete by value we find the index where the value to be deleted is
  and we call del(pos).
  */
  int value;
  cout<<"\nEnter value to be deleted: ";
  cin>>value;
  for(int index = 0; index < no_of_elements; ++index)
    if(array[index] == value) {
      del(index);
      return;
    }
  cout<<"\nNo such value !!!";
}

void List:: search() {
  if(no_of_elements == 0) {
    cout<<"\nList is empty.";
    return;
  }
  display();
  int value;
  int found = 0;
  cout<<"\nEnter value to be searched: ";
  cin>>value;
  for(int index = 0; index < no_of_elements; ++index)
    if(array[index] == value) {
      cout<<endl<<value<<" found at "<<index <<" index.";
      found = 1;
      return;
    }
  if(found == 0)
    cout<<"\nNo such element.";
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
    cout<<"\n9. Display list.";
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
        list.del(pos); break;
      case 6: 
        list.display();
        list.del(list.get_no_of_elements()-1);
        break;
      case 7: 
        list.display();
        list.delValue();
        break;
      case 8: 
        list.search(); 
        break;
      case 9: 
        list.display();
        break;
      default: cout<<"\nInvalid option.";
    }
    cout<<"\nDo you want to continue (y/n): ";
    cin>>res;
  }
}










