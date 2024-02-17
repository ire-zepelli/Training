import java.util.Scanner;

public class prac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter end time (e.g., 10:00 am): ");
        String input = scanner.nextLine();
        
        // Split the input string by space to separate hour, minute, and meridiem
        String[] parts = input.split("\\s+");
        
        // Ensure that we have three parts (hour, minute, meridiem)
        if (parts.length != 3) {
            System.out.println("Invalid input format");
            return;
        }
        
        // Extract hour, minute, and meridiem from the array
        int end_hour, end_min;
        String aorp2;
        try {
            end_hour = Integer.parseInt(parts[0]);
            end_min = Integer.parseInt(parts[1]);
            aorp2 = parts[2];
        } catch (NumberFormatException e) {
            System.out.println("Invalid hour or minute format");
            return;
        }
        
        // Additional operations or validations based on the meridiem
        if (!aorp2.equalsIgnoreCase("am") && !aorp2.equalsIgnoreCase("pm")) {
            System.out.println("Invalid meridiem entered");
            return;
        }
        
        // Output the parsed values
        System.out.println("End time: " + end_hour + ":" + end_min + " " + aorp2);
        
        scanner.close(); // Don't forget to close the scanner
    }
}
