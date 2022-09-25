#include <iostream>

using namespace std;

class node{
  public:
    int info;
  node* next;
};

class c_linked_list{
  private:
    node* p = new node();
    node* list_;
    int list_length;

  public:
    c_linked_list(){
      p->info = 0;
      p->next = p;
      list_ = p;
      cout << "P info:\n" << p->info << "\n" << p->next;
    }

    void insert_element(){
      p->info = 0;
      p->next = p;

    };

    void insert_node_at_end(int value){
      cout << "Value to insert: " << value << endl;
      node* P = list_;
      while(true){
        if(P->next == list_){
          cout << "Condition true";
          cout << "P: " << P->info <<endl;
          node* L = new node();
          L->info = value;
          L->next = list_;
          P->next = L;
          cout << "L->next: " << L->next << endl;
          cout << "P->next: " << P->next << endl;

          break;
        }
        P = P->next;
      }
    };

    void delete_at_start(){
      node* P = list_;
      while( P->next != list_){
        cout << "1";
        P = P->next;
        P->next = list_->next;
        node* temp = list_;
        list_ = list_->next;
        delete(temp);
      }
    };

    void create_list(){
      for(int i = 1 ; i<10; i++){
        insert_node_at_end(i);
      }
    };

    void display_list(void){
      cout << "\nDisplaying linked list: \n";
      cout << "[\n";
      node* temp = p;
      while(temp->next != list_){
        cout << temp->info << " | Address: " << temp->next << endl;
        temp = temp->next;
      }
      if(temp->next == list_){
        cout << temp->info << " | Address: " << temp->next << endl;
        temp = temp->next;
      }
      cout << "]\n";
      cout << "Address of first block: " << list_ <<endl;
    };
};


int main(){
  c_linked_list* ll = NULL;
  cout << "\nCheck 0\n";
  ll = new c_linked_list();
  cout << "\nCheck 1\n";
  ll->create_list();
  ll->display_list();
  cout << "\nCheck 2\n";
  ll->display_list();
  cout << "\nCheck 3\n";
  ll->delete_at_start();
  cout << "\nCheck 4\n";
  ll->display_list();
  return 0;
}
