import java.util.Scanner;

public class memorizo{
   public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int[] arr = new int[15];
      int sum = 0;
      int avg = 0;
      
      System.out.println("Enter 15 numbers:");
      for(int i = 0; i < arr.length; i++){
         arr[i] = sc.nextInt();
      } 
      System.out.println("Here are your numbers:");
      for(int i = 0; i < arr.length; i++){
         System.out.println(arr[i]);
      }
      System.out.println("The even numbers in the array are: ");
      for(int i = 0; i < arr.length; i++){
         if(i%2 ==0){
            System.out.print(arr[i] + " ");
            sum = sum + arr[i];
         }
      }
      System.out.println("\nThe sum of the arrays is: " + sum);
      avg = sum / 8;
      System.out.println("The average of the arrays is:" + avg);
   }
}