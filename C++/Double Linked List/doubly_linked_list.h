class node{
  public:
    int info;
  node* prev;
  node* next;
};


class d_linked_list{

  private:
    node* p = new node();
    node* list_;
    int list_length;

  public:
    d_linked_list();
    void insert_node_at_start(int value);
    void insert_node_at_end(int value);
    void delete_at_start();
    void create_list_f();
    void create_list_e();
    void display_list(void);
    void display_list_f(void);
};
