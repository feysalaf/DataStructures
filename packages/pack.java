package packages;
import java.util.Random;

//required packages
//

public class pack {
    public void print_a(int[] array){
        System.out.println("Printing array...");
        System.out.print("[ ");
        for(int i =0;i<array.length;i++){
            System.out.print(array[i] + " ");
        }
        System.out.print("]\n");
    }

    public int[] create_random_a(int length){
        Random rand = new Random();
        int[] random_array = new int[length];
        for(int i=0;i<length;i++){
            random_array[i] = rand.nextInt(10);;
        }
        return random_array;
    }

    public void print(String[] args){

    }
    public static void main(String[] args){
        
    }
}
