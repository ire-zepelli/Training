import java.util.Scanner;
public class memorize {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        int avg = 0;
        int[] arr = new int[10];


        System.out.println("Enter 10 numbers!");
        for(int i=0; i<arr.length; i++){
        arr[i] = sc.nextInt();
        }
        int max = arr[0];
        int min = arr[0];
        System.out.println("Here are the numbers you have chosen...");
        for(int i=0; i< arr.length ; i++){
        System.out.println(arr[i]);
        }
        System.out.println("The even numbers in the array are:");
        for(int i = 0; i <arr.length ; i++){
            if (i % 2 == 0){
                sum = sum + arr[i];
                System.out.print(arr[i] + " ");
            }
        }
        System.out.println("\nThe sum of the array is:" + sum);
        avg = sum / 8;
        System.out.println("The average of the array is:" + avg);

        for(int i = 0; i <arr.length ; i++){
            if (arr[i] > max){
                max = arr[i];
                
            }
        }

        System.out.println("The maximum value is:" + max);
        for(int i = 0; i <arr.length ; i++){
            if (arr[i] < min){
                min = arr[i];
    }
}
        System.out.println("The minimum value is:" + min);
    }
}