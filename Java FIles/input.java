import java.util.ArrayList;
import java.util.Scanner;

public class UserInputArrayList {
    public static void main(String[] args) {
        ArrayList<String> inputList = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter elements (type 'exit' to stop):");

        while (true) {
            String input = scanner.nextLine();

            if (input.equals("exit")) {
                break;
            }

            inputList.add(input);
        }

        System.out.println("Elements entered:");
        for (String element : inputList) {
            System.out.println(element);
        }
    }
}
