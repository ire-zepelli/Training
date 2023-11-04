import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter 1st number:");
        double num1 = sc.nextDouble();
        System.out.println("Enter 2nd number:");
        double num2 = sc.nextDouble();

        int choice;

        do {
            System.out.println(" ---- Calculator ----");
            System.out.println("1 --> Add");
            System.out.println("2 --> Subtract");
            System.out.println("3 --> Multiply");
            System.out.println("4 --> Devide");
            System.out.println("5 --> Exit");

            choice = sc.nextInt();
            switch (choice) {
                case 1: //add
                    double Add = num1 + num2;
                    System.out.println("--- ADDITION ---");
                    System.out.println(num1 + " + " + num2 + " = "+  Add);
                    break;
                case 2: // subtract
                    double subtract = num1 - num2;
                    System.out.println("--- SUBTRACTION ---");
                    System.out.println(num1 + " - " + num2 + " = "+  subtract);
                    break;
                case 3: // Multiply
                    double multiply = num1 * num2;
                    System.out.println("--- MULITPICATION ---");
                    System.out.println(num1 + " x " + num2 + " = "+  multiply);
                    break;
                case 4: // Divide
                    double divide = num1 / num2;
                    System.out.println("--- DIVISION ---");
                    System.out.println(num1 + " / " + num2 + " = "+  divide);
                    break;
                case 5: // Exit
                    System.out.println("Stopping program...");
                    break;
            }
        } while (choice != 5);
    }
}
