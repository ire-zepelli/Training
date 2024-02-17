import java.util.*;

public class walk {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int targetHour, targetMinute, walkingTime, prepTIme, totalPrep, totalTarget;
        char meridiem;
        String targetTime;

        //takeInput
        System.out.println("Enter target time: (e.g. 02:45 pm)");
        targetTime = sc.nextLine().toLowerCase();

        System.out.println("Enter walking time: ");
        walkingTime = sc.nextInt();

        System.out.println("Enter preparation time: ");
        prepTIme = sc.nextInt();

        targetHour = Integer.parseInt("" + targetTime.charAt(0) + targetTime.charAt(1));
        targetMinute = Integer.parseInt("" + targetTime.charAt(3) + targetTime.charAt(4));
        meridiem = targetTime.charAt(6);

        //if midnight
        if(targetHour == 12 && meridiem == 'a'){
            targetHour = 0;
        }
        //if afternoon
        else if(meridiem == 'p' && targetHour != 12){
            targetHour += 12;
        }

        totalTarget = (targetHour*60) + targetMinute;
        totalPrep = walkingTime + prepTIme;

        totalTarget -= totalPrep;

        targetHour = totalTarget / 60;
        targetMinute = totalTarget % 60;

        if(targetMinute < 0){
            targetHour -= 1;
            targetMinute += 60;
        }

        if(targetHour < 0 && meridiem == 'a'){
            targetHour += 12;
            meridiem = 'p';
        }

        if(targetHour < 12 && meridiem == 'p'){
            meridiem = 'a';
        }

        System.out.print(targetHour + ":");

        if(targetMinute < 10){
            System.out.print("0" + targetMinute + " ");
        } 
        else{
            System.out.print(targetMinute + " ");
        }

        System.out.print(meridiem + "m");

    }
}
