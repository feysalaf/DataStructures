#include <iostream>
#include "doubly_linked_list.h"

using namespace std;

//initialize the doubly linked list
d_linked_list::d_linked_list(){
  p->info = 0;
  p->next = NULL;
  p->prev = NULL;
  list_ = p;
  cout << "P info: " << p->info << "\nP next: " << p->next << "\nP prev: " << p->prev <<endl;

}

void d_linked_list::insert_node_at_start(int value){
  cout << "Value to insert: " << value << endl;
  node* P = list_;
  cout << "P info: " << P->info << "\nP next: " << P->next << "\nP prev: " << P->prev <<endl;

  while(true){
    if(P->prev == NULL){
      node* L = new node();
      L->info = value;
      L->next = list_;
      L->prev = NULL;
      P->prev = L;
      list_ = L;
      break;
    }
    P = P->next;
  }
}

void d_linked_list::insert_node_at_end(int value){
  cout << "Value to insert: " << value << endl;
  node* P = list_;
  cout << "P info: " << P->info << "\nP next: " << P->next << "\nP prev: " << P->prev <<endl;

  while(true){
    if(P->next == NULL){
      node* L = new node();
      L->info = value;
      L->next = NULL;
      L->prev = P;
      P->next = L;
      break;
    }
    P = P->next;
  }
}

void d_linked_list::delete_at_start(){
  node* P = list_;
  while( P->next != list_){
    cout << "1";
    P = P->next;
    P->next = list_->next;
    node* temp = list_;
    list_ = list_->next;
    delete(temp);
  }
}

void d_linked_list::create_list_f(){
  for(int i = 1 ; i<10; i++){
    insert_node_at_start(i);
  }
};

void d_linked_list::create_list_e(){
  for(int i = 1 ; i<10; i++){
    insert_node_at_end(i);
  }
};

void d_linked_list::display_list(void){
  cout << "\nDisplaying linked list: \n";
  cout << "[\n";
  node* temp = p;
  while(temp->next != NULL){
    cout << temp->info << " | Address next: " << temp->next << " | Address prev: " << temp->prev<< endl;
    temp = temp->next;
  }
  if(temp->next == NULL){
    cout << temp->info << " | Address next: " << temp->next << " | Address prev: " << temp->prev << endl;
    temp = temp->next;
  }
  cout << "]\n";
  cout << "Address of first block: " << list_ <<endl;
};

void d_linked_list::display_list_f(void){
  cout << "\nDisplaying linked list: \n";
  cout << "[\n";
  node* temp = list_;
  while(temp->next != NULL){
    cout << temp->info << " | Address next: " << temp->next << " | Address prev: " << temp->prev<< endl;
    temp = temp->next;
  }
  if(temp->next == NULL){
    cout << temp->info << " | Address next: " << temp->next << " | Address prev: " << temp->prev << endl;
    temp = temp->next;
  }
  cout << "]\n";
  cout << "Address of first block: " << list_ <<endl;
};

int main(){
  d_linked_list* ll = NULL;
  cout << "\nCheck 0\n";
  ll = new d_linked_list();
  cout << "\nCheck 1\n";
  ll->create_list_e();
  ll->display_list();

  cout << "\nCheck 2\n";
  cout << "\nVerifying details on the front list\n";
  d_linked_list* front_list = NULL;
  front_list = new d_linked_list();
  front_list->create_list_f();
  front_list->display_list_f();
  return 0;
}
