import java.util.ArrayList;
import java.util.Scanner;

public class List {

    static ArrayList<String> TD = new ArrayList<String>();

    static Scanner s = new Scanner(System.in);

    public static void main(String[] args) {
        int choice;
        

        do {
            System.out.println(" ---- MAIN MENU ----");
            System.out.println("1 ---> Create new Task ");
            System.out.println("2 ---> Print To-Do List");
            System.out.println("3 ---> Remove Task ");
            System.out.println("4 ---> Exit ");

            choice = s.nextInt();

            switch (choice) {

                case 1: //Add Task
                    System.out.println("Enter Task/s: Type\"DONE\" to stop");
                    String input1 = s.nextLine();
                    int index1 = 0;

                     while (!input1.equalsIgnoreCase("done")){
                        input1 = s.nextLine();
                        if(input1.equalsIgnoreCase("done")){ break; }
                        TD.add(index1, input1);
                        System.out.println("You Entered:" + input1);
                        index1++;
                    }

                    break;
                case 2: //Print
                    System.out.println("---- To-Do List! ----");
                   for(int i = 0; i < TD.size(); i++){
                    int tasknum = i+1;
                    System.out.println("Task No." + tasknum + ":" + TD.get(i));
                   }
                    break;
                case 3: //Remove Task
                   System.out.println("Enter the task number you want to remove: (Type \"DONE\" to stop)");
                   int num = s.nextInt();
                   num--;
                   TD.remove(num);
                    break;
                case 4: //Exit
                    System.out.println("Stopping Program...");
                    break;
                default:
                   System.out.println("Invalid Number!");
                   break;
            }
        } while (choice != 4);
    }
}
