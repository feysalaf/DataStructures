import java.util.Random;
import packages.pack;

public class selection_sort {
    public static void main(String[] args){
        //create array
        Random rand = new Random();
        pack obj = new pack();
        int[] random_array = new int[10];
        for(int i=0;i<10;i++){
            random_array[i] = rand.nextInt(10);;
        }
        obj.print_a(random_array);
        //create object
        
        //call object
    }
}
