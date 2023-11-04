import java.util.Scanner;
public class reverse {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a word or a phrase:");
        String word = sc.nextLine();
        System.out.println("You entered: " + word);

        char[] letters = new char[word.length()];
        
        int LetterIndex = 0;
        for(int i = word.length() - 1; i >= 0; i -- ){
            letters[LetterIndex] = word.charAt(i);
            LetterIndex++;
        }
        String reverse = "";
        for(int i = 0; i< word.length(); i++){
            reverse = reverse + letters[i];
        }
        System.out.println("Reverse:" + reverse);
    }
}
