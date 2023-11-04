import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;

public class TicTacToe {

    static boolean end = true;
    static int pos;
    static int moves = 0;

    public static void main(String[] args) {

        char[][] gameBoard = new char[][] { { ' ', '|', ' ', '|', ' ' },
                { '-', '+', '-', '+', '-' },
                { ' ', '|', ' ', '|', ' ' },
                { '-', '+', '-', '+', '-' },
                { ' ', '|', ' ', '|', ' ' } };

        printBoard(gameBoard);

        while (end) {
            Scanner sc = new Scanner(System.in);
            System.out.println("\nPlayer 1! Enter your placement: (1-9)");

            while (true) {
                pos = sc.nextInt();
                if (isMoveValid(gameBoard, pos)) {
                    break;
                }
            }

            placePiece(gameBoard, pos, "Player 1");

            moves++;

            printBoard(gameBoard);

            checkWinner(gameBoard, "Player 1", moves);

            if(end == false){
                break;
            }
            System.out.println("\nPlayer 2! Enter your placement: (1-9)");

            while (true) {
                pos = sc.nextInt();
                if (isMoveValid(gameBoard, pos)) {
                    break;
                }
            }

            placePiece(gameBoard, pos, "Player 2");

            moves++;

            printBoard(gameBoard);

            checkWinner(gameBoard, "Player 2", moves);

            if(end == false){
                break;
            }
        }

    }

    public static void printBoard(char[][] gameBoard) {
        for (char[] row : gameBoard) {
            System.out.println();
            for (char c : row) {
                System.out.print(c);
            }
        }
    }

    public static void placePiece(char[][] gameBoard, int pos, String user) {

        char symbol = 'X';

        if (user.equals("Player 1")) {
            symbol = 'X';
        } else if (user.equals("Player 2")) {
            symbol = 'O';
        }
        switch (pos) {
            case 1:
                gameBoard[0][0] = symbol;
                break;
            case 2:
                gameBoard[0][2] = symbol;
                break;
            case 3:
                gameBoard[0][4] = symbol;
                break;
            case 4:
                gameBoard[2][0] = symbol;
                break;
            case 5:
                gameBoard[2][2] = symbol;
                break;
            case 6:
                gameBoard[2][4] = symbol;
                break;
            case 7:
                gameBoard[4][0] = symbol;
                break;
            case 8:
                gameBoard[4][2] = symbol;
                break;
            case 9:
                gameBoard[4][4] = symbol;
                break;
        }
    }

    private static void checkWinner(char[][] gameBoard, String user, int moves) {

        if ((gameBoard[0][0] != ' ') && (gameBoard[0][0] == gameBoard[0][2])
                && (gameBoard[0][2] == gameBoard[0][4])) {
            System.out.println("\n Congratulations! " + user + " is the Winner.");
            end = false; // top row
        } else if ((gameBoard[2][0] != ' ') && (gameBoard[2][0] == gameBoard[2][2])
                && (gameBoard[2][2] == gameBoard[2][4])) {
            System.out.println("\n Congratulations! " +user + " is the Winner!");
            end = false; // middle row
        } else if ((gameBoard[4][0] != ' ') && (gameBoard[4][0] == gameBoard[4][2])
                && (gameBoard[4][2] == gameBoard[4][4])) {
            System.out.println("\n Congratulations! " + user + " is the Winner!");
            end = false; // bottom row
        } else if ((gameBoard[0][0] != ' ') && (gameBoard[0][0] == gameBoard[2][0])
                && (gameBoard[2][0] == gameBoard[4][0])) {
            System.out.println("\n Congratulations! " + user + " is the Winner!");
            end = false; // left column
        } else if ((gameBoard[0][2] != ' ') && (gameBoard[0][2] == gameBoard[2][2])
                && (gameBoard[2][2] == gameBoard[4][2])) {
            System.out.println("\n Congratulations! " + user + " is the Winner!");
            end = false; // middle column
        } else if ((gameBoard[0][4] != ' ') && (gameBoard[0][4] == gameBoard[2][4])
                && (gameBoard[2][4] == gameBoard[4][4])) {
            System.out.println("\n Congratulations! " + user + " is the Winner!");
            end = false; // right column
        } else if ((gameBoard[0][0] != ' ') && (gameBoard[0][0] == gameBoard[2][2])
                && (gameBoard[2][2] == gameBoard[4][4])) {
            System.out.println("\n Congratulations! " + user + " is the Winner!");
            end = false; // diagonal 1
        } else if ((gameBoard[0][4] != ' ') && (gameBoard[0][4] == gameBoard[2][2])
                && (gameBoard[2][2] == gameBoard[4][0])) {
            System.out.println("\n Congratulations! " + user + " is the Winner!");
            end = false; // diagonal 2
        } // else if((gameBoard[0][0] != ' ') && (gameBoard[0][2] != ' ') &&
          // (gameBoard[0][4] != ' ')
          // && (gameBoard[2][0] != ' ') && (gameBoard[2][2] != ' ') && (gameBoard[2][4]
          // != ' ') &&
          // (gameBoard[4][0] != ' ') && (gameBoard[4][2] != ' ') && (gameBoard[4][4] != '
          // ')){
          // System.out.println("CAT!"); //draw
          // }
        else if (moves == 9) {
            System.out.println("\nThe game ended in a DRAW!");
            end = false; // draw
        }
    }

    private static boolean isMoveValid(char[][] gameBoard, int pos) {
        switch (pos) {
            case 1:
                if (gameBoard[0][0] == ' ') {
                    return true;
                } else
                    return false;
            case 2:
                if (gameBoard[0][2] == ' ') {
                    return true;
                } else
                    return false;
            case 3:
                if (gameBoard[0][4] == ' ') {
                    return true;
                } else
                    return false;
            case 4:
                if (gameBoard[2][0] == ' ') {
                    return true;
                } else
                    return false;
            case 5:
                if (gameBoard[2][2] == ' ') {
                    return true;
                } else
                    return false;
            case 6:
                if (gameBoard[2][4] == ' ') {
                    return true;
                } else
                    return false;
            case 7:
                if (gameBoard[4][0] == ' ') {
                    return true;
                } else
                    return false;
            case 8:
                if (gameBoard[4][2] == ' ') {
                    return true;
                } else
                    return false;
            case 9:
                if (gameBoard[4][4] == ' ') {
                    return true;
                } else
                    return false;
            default:
                return false;
        }
    }
}