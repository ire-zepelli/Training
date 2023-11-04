import java.util.Scanner;

public class Sales {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        int sum = 0;
        int avg = 0;

        System.out.println("Enter 15 numbers nigga");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Here are you numbers master...");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
        System.out.print("Even Numbers:");
        for (int i = 0; i < arr.length; i++) {
            if (i % 2 == 0) {
                sum = sum + arr[i];
                System.out.print(arr[i] + " ");
            }
        }
        System.out.println("The sum of the Numbers is:" + sum);
        avg = sum / 7;
        System.out.println("The average of the numbers is: " +avg);
    }
}
