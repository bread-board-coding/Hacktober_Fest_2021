/*
  ===About Me===
  Name = Aakash Jain
  Here is an insertion sort program, it is easy to understand.
  
*/

import java.util.*;
public class insertionsort {
    public static void insertionSort(int[] arr){
        int n = arr.length;
        for(int i = 0; i < n; i++){
            for(int j = i; j > 0; j--){
                if(arr[j-1] > arr[j]){
                    swap(arr, j-1 , j);
                }
            }
        }

    }
    public static void swap(int[] arr , int i , int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    public static void print(int[] arr){
        for(int i = 0; i < arr.length; i++){
            System.out.println(arr[i]);
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n ; i++){
            arr[i] = sc.nextInt();
        }
        insertionSort(arr);
        print(arr);
    }
}
