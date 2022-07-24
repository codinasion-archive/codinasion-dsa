import java.util.ArrayList;
import java.util.Arrays;

public class BubbleSort {
    public static void main(String[] args) {
        int[] arr = {5,4,1,6,2};
        bubble(arr);
        System.out.println(Arrays.toString(arr));
    }

    public static void bubblesort(int[] arr){
        int sz = arr.length;
        boolean swapped = false;
        for(int i = 0; i < sz; i++){
            for(int j = 1; j < sz - i; j++){
                if(arr[j] < arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j-1] = temp;
                    swapped = true;
                }
            }
            if(!swapped) break;
        }
    }
}