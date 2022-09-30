import packages.pack;

class node<T>{
    T value;
    node<T> next;
}

public class linked_list<T> {
    node<Integer> head = new node<Integer>();
    int list_length;
    public linked_list(){
        head.value = 0;
        head.next = null;
    }
    
    public void add_node(int value){
        node<Integer> q = head;
        //if head is null, create first node
        while(true){
            if(q.next == null){
                //add node
                //create node
                node<Integer> p = new node<>();
                p.value = value;
                p.next = null;
                q.next = p;
                break;
            }
            q = q.next;
        }
    }
    
    public void create_list(int value){
        this.list_length = value;
        for(int i=1; i<value;i++){
            this.add_node(i);
        }
    }

    public void print_list(){
        node<Integer> q = head;
        System.out.println("\nNode Address | Node Value | Node Next");
        while(q.next != null){
            System.out.print(q);
            System.out.println("       " + q.value + "       " + q.next);
            q = q.next;
        }
        System.out.print(q);
        System.out.println("       " + q.value + "       " + q.next);
    }

    void search(int value){
        node<Integer> q = head;
        System.out.println("\nSearching for: " + value + " ...");
        while(true){
            if(q.value == value){
                System.out.println("Value found");
                System.out.println(q + "       " + q.value + "       " + q.next);
                break;
            }
            else{
                if(q.next == null){
                    System.out.println("Value not found!");
                    break;
                }
                q = q.next;
            }
        }
    }

    void add_at_start(int value){
        node<Integer> q = head;
        node<Integer> p = new node<>();
        p.value = value;
        p.next = q;
        head = p;
        System.out.println("\nValue: " + value  + " added to start!");
    }

    void add_at_end(int value){
        node<Integer> q = head;
        while(true){
            if(q.next == null){
                node<Integer> p = new node<>();
                p.value = value;
                p.next = null;
                q.next = p;
                break;
            }
            else{
                q = q.next;
            }
        }
        System.out.println("\nValue: " + value  + " added to end!");
    }

    // boolean add_after_location(int v){

    // }





}

class test{

    public static void main(String[] args){
        //create linked_list
        linked_list<Integer> list = new linked_list<>();
        list.create_list(20);
        list.print_list();
        list.search(212);
        list.search(10);
        list.add_at_start(100);
        list.print_list();
        list.add_at_end(200);
        list.print_list();

    }
}