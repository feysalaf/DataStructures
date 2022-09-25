import packages.pack;

class node<T>{
    T value;
    node<T> next;
}

public class linked_list<T> {
    node<Integer> head = new node<Integer>();

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
        for(int i=1; i<value;i++){
            this.add_node(i);
        }
    }

    public void print_list(){
        node<Integer> q = head;
        System.out.println("\nNode Address | Node Value | Node Next");
        for(int i = 0; i<10; i++){
            System.out.print(q);
            System.out.println("       " + q.value + "       " + q.next);
            q = q.next;
        }
    }

}

class test{

    public static void main(String[] args){
        //create linked_list
        linked_list<Integer> list = new linked_list<>();
        list.create_list(10);
        list.print_list();
    }
}