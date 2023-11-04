import java.util.ArrayList;
import java.util.Scanner;

public class ToDoList {

    static ArrayList<String> TD = new ArrayList<String>();

    static Scanner s = new Scanner(System.in);

    public static void main(String[] args) {

        Menu();
        int choice = s.nextInt();

       do{
           Menu();
            choice = s.nextInt();

            switch (choice) {
                case 1:
                    create();
                    break;
                case 2:
                    print();
                    break;
                case 3:
                    // Remove Task
                    break;
                case 4:
                    // Exit
                    break;
                default:
                    System.out.println("Invalid Number");
                    break;
            }
        } while (choice != 4);
    }

    static void Menu() {
        System.out.println(" ---- MAIN MENU ----");
        System.out.println("1 ---> Create new Task ");
        System.out.println("2 ---> Print To-Do List");
        System.out.println("3 ---> Remove Task ");
        System.out.println("4 ---> Exit ");
    }

    static void create() {
        String condition;
        int index = 0;
        System.out.println("Enter Task/s: (Type \"exit \" to quit)");
        do{
            condition = s.nextLine();
            TD.add( index, condition);
            index++;
        }while( condition == "exit");

    }
    static void print(){
        for(int i = 0; i < TD.size(); i++){
            int taskno = i+1;
            System.out.println("Task " + taskno + ": " + TD.get(i));
        }
    }
}
