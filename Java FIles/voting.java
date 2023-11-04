import java.util.Scanner;
public class voting {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int age = 0;
        int valid = 18;

        System.out.println("Enter ur age:");
        age = sc.nextInt();
        System.out.println("Your age is:" +age);

        if(age < 18){
            System.out.println("You are not allowed to vote!");
        }
        else{
            System.out.println("You are allowed to vote!");
            }
    }    
}
