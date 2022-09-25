import packages.pack;

public class selection_sort {
    public static int[] select_sort(int[] array){
        //for length of the array
        int index;
        int temp;
        for(int i = 0; i<array.length; i++){
                index = i;
            for(int j = i+1; j<array.length; j++){
                //if next element of array is smaller than previous
                if(array[j] < array[index]){
                    index = j; //let j be the index since it will be swapped
                }
                //swap elements
                    temp = array[i];
                    array[i] = array[index];
                    array[index] = temp;
            }
        }
        return array;
        
    };


    public static void main(String[] args){
        pack o = new pack();
        //create random array
        int[] random_array = o.create_random_a(10);
        o.print_a(random_array);
        o.print_a(select_sort(random_array));
        
    }
}
