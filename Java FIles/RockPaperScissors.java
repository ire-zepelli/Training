import java.util.*;


public class RockPaperScissors {
    public static void main(String[] args){

        Random rand = new Random();

        int player = 0, computer;
        String[] hand = {"rock", "paper", "scissors"};

        menu();

        player = playerHand(player,hand);

        computer = rand.nextInt(3);
        System.out.println("Computer played " + hand[computer]);

        checkWinner(player, computer, hand);
        

        System.out.println(player);
    }

    static void checkWinner(int player, int computer, String[] hand){
        if(hand[player] == hand[computer]){
            System.out.println("GAME CONCLUDED IN A DRAW!");
        }
        if(hand[player] == "rock" && hand[computer] == "scissors"){
            System.out.println("You won!");
        }
        if(hand[player] == "paper" && hand[computer] == "rock"){
            System.out.println("You won!");
        }
        if(hand[player] == "scissors" && hand[computer] == "paper"){
            System.out.println("You won!");
        }
        else{
            System.out.println("Computer won!");
        }
    }

    static int playerHand(int player, String[] hand){

        Scanner sc = new Scanner(System.in);
        do{
            System.out.print("Player 1 : ");
            player = sc.nextInt();
            player--;
        }while(player > 2 || player < 0);

        System.out.println("You played " + hand[player]);

        sc.close();
        return player;
    }

    static void menu(){
        System.out.println("ROCK-PAPER-SCISSORS");
        System.out.println("1 ----> Rock");
        System.out.println("2 ----> Paper");
        System.out.println("3 ----> Scissors");
    }
}
