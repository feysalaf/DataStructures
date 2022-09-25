import packages.pack;
import java.util.ArrayList;
import java.util.List;

class Container<T>{
    //customize type to what the user defines
    T value;
    
    Container(T value){
        this.value = value;
    }

    public void show(){
        System.out.println(value.getClass().getName());
    }
    
}

public class generics_example {

    public static void main(String[] args){
        int value = 4;
        List<Integer>  values = new ArrayList<Integer>();
        values.add(7);
        //not allowed
        // values.add("sam");

        //using the generics class
        Container<String> obj = new Container<String>("Feysal Afzal");
        obj.show();

        //using with a different input
        Container<Integer> obj_int = new Container<Integer>(2);
        obj_int.show();
    }

}
