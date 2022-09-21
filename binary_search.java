import java.util.Random;

class Array {
    //class variables
    int a = 2;
    public int[] class_array;
    public int[] random_array;
    Random rand = new Random();


    int[] create_array(int input_length){
        System.out.println("Creating an array!");
        this.class_array = new int[input_length];
        for(int i = 0; i< input_length; i++){
            class_array[i] = i*10;
        }
        return class_array;
    }

    int[] create_random_array(int input_length){
        System.out.println("Creating a random array!");
        this.random_array = new int[input_length];
        for(int i = 0; i< input_length; i++){
            random_array[i] = rand.nextInt(10);
        }
        return random_array;
    }



    void print_array(){
        System.out.print("Printing the array:\n[");
        int input_length = this.class_array.length;
        for(int i = 0; i<input_length; i++){
            System.out.print(" " + this.class_array[i]);
        }
        System.out.print("]");
    }


    void print_random_array(){
        System.out.print("\nPrinting the array:\n[");
        int input_length = this.class_array.length;
        for(int i = 0; i<input_length; i++){
            System.out.print(" " + this.random_array[i]);
        }
        System.out.print("]");
    }

    int binary_search(int element){
        //array is this.class_array
        //all indexing to be done based on it.
        //for an external array, override params
        int array_length = this.class_array.length;
        int start = 0;
        int end = array_length-1;

        while(start<=end){
            int mid = (start+end)/2;
            System.out.println("Start: " + start + " | End: " + end + " | Mid: " + mid + " |");
            if(this.class_array[mid]==element){
                System.out.println("Element: " + element + " is found!");
                return 1;
            }
            else if(this.class_array[mid]>element){
                end = mid - 1;
            }
            else if(this.class_array[mid]<element){
                start = mid + 1;
            }
        }
        System.out.println("Element: " + element + " not found");
        return -1;
    }

    void binary_search_(int element){
        if(element == 2){
            System.out.println("\nSearch started...");
            System.out.println(("Element: " + element + " not found!"));
            return;
        }
        //find array length
        int array_length = this.class_array.length;
        //find first element
        int first_element = this.class_array[0];
        //find last element
        int last_element = this.class_array[array_length-1];
        //mid element
        boolean search = true;
        int counter = 0;
        System.out.println("\nSearch started...");
        while(search == true) {
            counter = counter + 1;
            if(counter > 20){
                search = false;
                System.out.println("Element: " + element + " not found!");
            }
            int mid = (first_element+last_element)/2;
            if (element == mid) {
                System.out.println("Element: " + element + " found!");
                search = false;

            } else if (element < mid) {
                //search lower half
                last_element = mid;

            } else if (element > mid) {
                //search upper half
                first_element = mid;
            }
        }
    }


    void sorting(){
        System.out.println("\nSorting Array");
        int array_length = this.random_array.length;
        for(int i = 0;i< array_length-1; i++){
            for(int j= 0; j<array_length-2; j++){
                if(this.random_array[j] > this.random_array[j+1]){
                    //swap elements
                    int temp = this.random_array[j];
                    this.random_array[j] = this.random_array[j+1];
                    this.random_array[j+1] = temp;
                }
            }
        }
    }

    void delete_value(int element_to_delete){
        System.out.println("\n\nDeleting " + element_to_delete + " from the array...");
        element_to_delete = element_to_delete/10;
        //create duplicate array with one element lesser
        int[] copied_array = new int[this.class_array.length-1];
        System.out.println("Array length: "+ this.class_array.length);

        for(int i = 0,j=0; i<this.class_array.length; i++){
            if(i!= element_to_delete){
                copied_array[j++] = this.class_array[i];
            }
        }

        System.out.println("Element " + element_to_delete*10 + " deleted!");
        System.out.print("\nPrinting the new array:\n[");
        int input_length = copied_array.length;
        for(int i = 0; i<input_length; i++){
            System.out.print(" " + copied_array[i]);
        }
        System.out.print("]");
    }
}

public class binary_search {
    public static void main(String[] args){
        //call the array object
        Array my_array = new Array();
        System.out.println(my_array.a);
        my_array.create_array(10);
        my_array.print_array();
        my_array.binary_search(2);
        for(int i=0;i<11;i++){
            my_array.binary_search(i);
        }
    }
}