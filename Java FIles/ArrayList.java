import java.util.Scanner;

public class ArrayList{
   public static void main(String[] args){
   Scanner sc = new Scanner(System.in);
   
      System.out.println("Welcome to the Auction!");
      System.out.println("1 -- How many niggers do you want to buy?");
      System.out.println("2 -- I would like to purchase a nigger");
      int choice = sc.nextInt();
      
      switch (choice)
      {
         case 1:
          System.out.println("Enter how many niggers do you want to buy?");
          int size = sc.nextInt();
         String[] niggers = new String[size];
         for (int i = 0; i < size; i++) {
          niggers[i] = sc.next();
          break;
    }
         case 2:
            System.out.println(" Well said, these are our avalaible niggers! \n 1 -- Jade \n 2 -- Keith \n 3 -- Mark ");
               break;
         default:
            System.out.println("Can you even count or are you a nigger in disguise?");
               break;
      }
   }
}