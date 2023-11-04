import java.util.Scanner;

public class POG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[5];
        int sum = 0;
        int avg = 0;

        System.out.println("Enter 5 numbers:");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        int max = arr[0];
        int min = arr[0];
        System.out.println("Here are your numbers:");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        System.out.println("\nThe highest number is: " + max);
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        System.out.println("The lowest number is: " + min);
        for (int i = 0; i < arr.length; i++) {
            sum = sum + arr[i];
        }
        System.out.println("The sum of all the numbers is: " + sum);
        for (int i = 0; i < arr.length; i++) {
            avg = sum / 5;
        }
        System.out.println("The average of the array is: " + avg);
        System.out.println("The even numbers in the arrays are:");
        for (int i = 0; i < arr.length; i++) {
            if (i % 2 == 0) {
                System.out.print(arr[i] + " ");
            }
        }
        System.out.println("\nThe odd numbers in the arrays are:");
        for (int i = 0; i < arr.length; i++) {
            if (i % 2 == 1) {
                System.out.print(arr[i] + " ");
            }
        }
        System.out.println("randon numbers:");
        int ranum = (int)(Math.random() *101);
        System.out.println(ranum);
    }
}
